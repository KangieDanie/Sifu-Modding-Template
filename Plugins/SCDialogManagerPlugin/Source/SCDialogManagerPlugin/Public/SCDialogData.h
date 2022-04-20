#pragma once
#include "CoreMinimal.h"
#include "LipSyncPhonemeInPhraseArray.h"
#include "LipSyncEmotionDataArray.h"
#include "LipSyncPhonemeInPhrase.h"
#include "SCGestureContainer.h"
#include "LipSyncEmotionData.h"
#include "SCDialogData.generated.h"

//class UAkAudioEvent;

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AkEventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseLipSync;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<float, float> Envelope;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint16, FLipSyncPhonemeInPhraseArray> phonemeInPhrase;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint16, FLipSyncEmotionDataArray> emotionsInPhrase;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLipSyncPhonemeInPhraseArray m_phonemeForTest;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLipSyncEmotionDataArray m_emotionForTest;
    
   /* UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AkEventObj;*/
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AkEventAltName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<float, float> EnvelopeAlt;
    
   /* UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AkEventAltObj;*/
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Subtitles;
    
    UPROPERTY(EditAnywhere)
    FSCGestureContainer GestureContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldDisplayText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_SubtitlesWithGender;
    
    UPROPERTY(Transient)
    TArray<FLipSyncPhonemeInPhrase> phonemeInPhraseWithGender;
    
    UPROPERTY(Transient)
    TArray<FLipSyncEmotionData> emotionsInPhraseWithGender;
    
    FSCDialogData();
};

