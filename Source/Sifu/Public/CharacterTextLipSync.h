#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Text2LipSync TextLipSync
#include "TextLipSync.h"
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
//CROSS-MODULE INCLUDE: SCCore LipSyncPhonemeInPhrase
#include "LipSyncPhonemeInPhrase.h"
//CROSS-MODULE INCLUDE: Text2LipSync LipSync_TimedData
#include "LipSync_TimedData.h"
//CROSS-MODULE INCLUDE: SCCore LipSyncEmotionData
#include "LipSyncEmotionData.h"
#include "CharacterTextLipSync.generated.h"

//class UAkAudioEvent;

UCLASS()
class SIFU_API UCharacterTextLipSync : public UTextLipSync, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
   /* UFUNCTION(BlueprintCallable)
    void BPF_Speak(const FLipSync_TimedData& _phrase, const TArray<FLipSyncPhonemeInPhrase>& _phonemes, const TArray<FLipSyncEmotionData>& _emotions, UAkAudioEvent* _audioEvent, TMap<float, float> _enveloppeValueByTime, bool _bUseImprovedTextToPhoneme);
  */  
    UCharacterTextLipSync();
    
    // Fix for true pure virtual functions not being implemented
};

