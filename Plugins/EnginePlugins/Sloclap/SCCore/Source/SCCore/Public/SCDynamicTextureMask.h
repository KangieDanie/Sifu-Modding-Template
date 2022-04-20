#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDynamicTextureMask_DrawShape.h"
#include "EDynamicTextureMask_PositionBakingType.h"
#include "EDynamicTextureMask_DrawType.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SCDynamicTextureMask.generated.h"

class ASCPositionBakeSceneCapture;
class UDynamicTextureMaskDB;
class UTextureRenderTarget2D;
class UTexture;
class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(BlueprintType)
class SCCORE_API USCDynamicTextureMask : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bEnablePositionBaking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDynamicTextureMask_PositionBakingType m_ePositionBakingTypeEnum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDynamicTextureMask_DrawType m_eDrawType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDynamicTextureMask_DrawShape m_eDrawShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASCPositionBakeSceneCapture* m_PositionBakerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDynamicTextureMaskDB* m_DynamicTextureMaskDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> m_eTextureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iBakedTextureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iMaskTextureResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* m_BakedPositionTextureTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* m_StaticBakedPositionTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* m_MaskRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsBaked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsPlane;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> m_MaterialIDsToBake;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMeshComponent* m_MeshToBake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iUVChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iDilationSteps;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector m_vBoundsMin;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector m_vBoundsMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_BakedPositionTextureParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_HitPositionParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_HitSizeParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_HitFadeParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_AxisVParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_AxisUParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_HitMeshBoundsMinParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_HitMeshBoundsMaxParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_ChannelUVParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_MaskParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_MarkColorParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_TextureToProjectParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_TextureToCopyParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_TextureToDilateParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_DilationStepsParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_DilationTextureSizeParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_IsPlaneParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UMaterialInstanceDynamic* m_DilateMID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UMaterialInstanceDynamic* m_CopyMID;
    
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_BakedPositionHitDrawerInstanceDynamic;
    
    UFUNCTION(BlueprintCallable)
    void SetupLocalBoundsOffline();
    
    UFUNCTION(BlueprintCallable)
    void CreatePositionBakingTextureTarget();
    
    UFUNCTION(BlueprintCallable)
    void CreateMaskTextureTarget();
    
    UFUNCTION(BlueprintCallable)
    void CreateBothTexturesTarget();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_DrawOnMaskOverride(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, UTexture* _TextureToProject, FLinearColor _color, EDynamicTextureMask_DrawShape _eDrawShape);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_DrawOnMask(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, UTexture* _TextureToProject, FLinearColor _color);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_BakeSelfPositionRuntime();
    
public:
    USCDynamicTextureMask();
};

