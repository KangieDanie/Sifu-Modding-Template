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


/*=============================================================================
	AkGameObject.h:
=============================================================================*/

#pragma once

#include "AkAudioDevice.h"
#include "Components/SceneComponent.h"
#include "AkGameObject.generated.h"


UCLASS(ClassGroup=Audiokinetic, BlueprintType, Blueprintable, hidecategories=(Transform,Rendering,Mobility,LOD,Component,Activation), AutoExpandCategories=AkComponent, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkGameObject: public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:
	/** Wwise Event to be posted on this game object */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AkEvent")
	UAkAudioEvent* AkAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkEvent")
	FString EventName;

	/**
	 * Posts this game object's AkAudioEvent to Wwise, using this as the game object source
	 *
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkGameObject", meta = (AdvancedDisplay = "2", AutoCreateRefTerm = "PostEventCallback,ExternalSources"))
	virtual int32 PostAssociatedAkEvent(
		UPARAM(meta = (Bitmask, BitmaskEnum = EAkCallbackType)) int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback,
		const TArray<FAkExternalSourceInfo>& ExternalSources
	);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|AkGameObject", meta = (AutoCreateRefTerm = "PostEventCallback,ExternalSources", Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
	virtual void PostAssociatedAkEventAsync(const UObject* WorldContextObject,
		UPARAM(meta = (Bitmask, BitmaskEnum = EAkCallbackType)) int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback,
		const TArray<FAkExternalSourceInfo>& ExternalSources,
		FLatentActionInfo LatentInfo,
		int32& PlayingID);

	AK_DEPRECATED(2019.1.2, "This function is deprecated and will be removed in future releases.")
	virtual int32 PostAssociatedAkEvent(
		UPARAM(meta = (Bitmask, BitmaskEnum = EAkCallbackType)) int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback
	);

	/**
	 * Posts an event to Wwise, using this as the game object source
	 *
	 * @param AkEvent		The event to post
	 * @param CallbackMask	Mask of desired callbacks
	 * @param PostEventCallback	Blueprint Event to execute on callback
	 *
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|AkGameObject", meta = (AdvancedDisplay = "1", AutoCreateRefTerm = "PostEventCallback,ExternalSources"))
	virtual int32 PostAkEvent(
		class UAkAudioEvent * AkEvent,
		UPARAM(meta = (Bitmask, BitmaskEnum = EAkCallbackType)) int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback,
		const TArray<FAkExternalSourceInfo>& ExternalSources,
		const FString& in_EventName
	);

	/**
	 * Posts an event to Wwise, using this as the game object source
	 *
	 * @param AkEvent		The event to post
	 * @param CallbackMask	Mask of desired callbacks
	 * @param PostEventCallback	Blueprint Event to execute on callback
	 *
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|AkGameObject", meta = (AdvancedDisplay = "3", AutoCreateRefTerm = "PostEventCallback,ExternalSources", Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
	virtual void PostAkEventAsync(const UObject* WorldContextObject,
			class UAkAudioEvent* AkEvent,
			int32& PlayingID,
			UPARAM(meta = (Bitmask, BitmaskEnum = EAkCallbackType)) int32 CallbackMask,
			const FOnAkPostEventCallback& PostEventCallback,
			const TArray<FAkExternalSourceInfo>& ExternalSources,
			FLatentActionInfo LatentInfo
	);

	AK_DEPRECATED(2019.1.2, "This function is deprecated and will be removed in future releases.")
	virtual int32 PostAkEvent(
		class UAkAudioEvent * AkEvent,
		UPARAM(meta = (Bitmask, BitmaskEnum = EAkCallbackType)) int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback,
		const FString& in_EventName
	);

	/**
	 * Stops playback using this game object as the game object to stop
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|AkComponent")
	void Stop();

	virtual AkPlayingID PostAkEventByNameWithDelegate(
		const FString& in_EventName,
		int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback,
		const TArray<FAkExternalSourceInfo>& ExternalSources = TArray<FAkExternalSourceInfo>());

	virtual void PostAkEventAsyncByEvent(const UObject* WorldContextObject,
		class UAkAudioEvent* AkEvent,
		int32 CallbackMask,
		const FOnAkPostEventCallback& PostEventCallback,
		const TArray<FAkExternalSourceInfo>& ExternalSources,
		FLatentActionInfo LatentInfo,
		int32& PlayingID
	);

#if CPP
	bool VerifyEventName(const FString& in_EventName) const;
	bool AllowAudioPlayback() const;
	AkGameObjectID GetAkGameObjectID() const;
	virtual void UpdateOcclusionObstruction() {};
	bool HasActiveEvents() const;
#endif

protected:
	/** Whether an event was posted on the game object. Never reset to false. */
	bool bStarted;
	bool IsRegisteredWithWwise = false;
};
