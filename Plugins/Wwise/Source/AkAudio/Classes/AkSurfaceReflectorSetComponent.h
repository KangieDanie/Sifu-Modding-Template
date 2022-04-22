/********************************************************************************
The content of the files in this repository include portions of the AUDIOKINETIC
Wwise Technology released in source code form as part of the SDK package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
********************************************************************************/


#pragma once
#include "AkAcousticTexture.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class UAkRoomComponent;

DECLARE_DELEGATE(FOnRefreshDetails);


USTRUCT(BlueprintType)
struct FAkPoly
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audiokinetic|AkSurfaceReflectorSet")
	UAkAcousticTexture* Texture = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audiokinetic|AkSurfaceReflectorSet", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float Occlusion = 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audiokinetic|AkSurfaceReflectorSet")
	bool EnableSurface = true;
};

UCLASS(ClassGroup = Audiokinetic, BlueprintType, hidecategories = (Transform, Rendering, Mobility, LOD, Component, Activation, Tags), meta = (BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkSurfaceReflectorSet")
	void SendSurfaceReflectorSet();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkSurfaceReflectorSet")
	void RemoveSurfaceReflectorSet();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkSurfaceReflectorSet")
	void UpdateSurfaceReflectorSet();

	/** Enable reflection with geometry */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Toggle)
	uint32 bEnableSurfaceReflectors : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="AcousticSurfaces")
	TArray<FAkPoly> AcousticPolys;

	/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Acoustic Surface Properties")
	uint32 bEnableDiffraction : 1;

	/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Acoustic Surface Properties", meta = (EditCondition = "bEnableDiffraction"))
	uint32 bEnableDiffractionOnBoundaryEdges : 1;

	/** (Optional) Associate this Surface Reflector Set with a Room.
	Associating a surface reflector set with a particular room will limit the scope in which the geometry is visible/accessible. Leave it to None and this geometry will have a global scope.
	It is recommended to associate geometry with a room when the geometry is (1) fully contained within the room (ie. not visible to other rooms except by portals), and (2) the room does not share geometry with other rooms. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.
	Take note that once one or more geometry sets are associated with a room, that room will no longer be able to access geometry that is in the global scope.*/ 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Acoustic Surface Properties")
	AActor* AssociatedRoom;

	UModel* ParentBrush;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TArray<UTextRenderComponent*> TextVisualizers;
	
	FText GetPolyText(int32 PolyIdx) const;

	void SetOnRefreshDetails(const FOnRefreshDetails& OnRefreshDetailsDelegate) { OnRefreshDetails = OnRefreshDetailsDelegate; }
	void ClearOnRefreshDetails() { OnRefreshDetails.Unbind(); }
	const FOnRefreshDetails* GetOnRefreshDetails() { return &OnRefreshDetails; }
#endif

#if WITH_EDITOR
	/**
	* Check for errors
	*/
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditUndo() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction);

	void UpdatePolys();
	void UpdateText(bool Visible);
	void DestroyTextVisualizers();

	bool WasSelected;
#endif

	virtual void BeginPlay() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) override;
	
private:
	inline bool ShouldSendGeometry() const;
	void InitializeParentBrush();

	bool GeometryHasBeenSent = false;

#if WITH_EDITORONLY_DATA
	FOnRefreshDetails OnRefreshDetails;
#endif
};
