#pragma once
#include "CoreMinimal.h"
#include "InheritedDataAsset.h"
#include "EPhoneme.h"
#include "ELipSyncAnimType.h"
#include "LipSyncDB.generated.h"

class UPoseAsset;
class UCurveFloat;

UCLASS(BlueprintType)
class TEXT2LIPSYNC_API ULipSyncDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MorphLowerLimit;
    
    UPROPERTY(EditAnywhere)
    float MorphUpperLimit;
    
    UPROPERTY(EditAnywhere)
    float MinimumPhonemesInterval;
    
    UPROPERTY(EditAnywhere)
    float PauseFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float PauseFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float PhonemeFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float PhonemeFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float m_fPlayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EmotionBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortEmotionHalfDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELipSyncAnimType AnimationType;
    
    UPROPERTY(EditAnywhere)
    UPoseAsset* m_PoseAsset;
    
    UPROPERTY(EditAnywhere)
    TMap<EPhoneme, FName> m_MorphTargetsMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> m_EmotionTargetsMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> m_FullIdleToDialogIdleTargetName;
    
    UPROPERTY(EditAnywhere)
    float m_fLipSyncCurveChannelBlendDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PhonemeBlendInCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PhonemeBlendOutCurve;
    
    UPROPERTY(VisibleAnywhere)
    float PauseMultiplier;
    
    UPROPERTY(VisibleAnywhere)
    float EnvelopeMultiplier;
    
    UPROPERTY(VisibleAnywhere)
    float EnvelopeVolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AudioMinTreshold;
    
    ULipSyncDB();
};

