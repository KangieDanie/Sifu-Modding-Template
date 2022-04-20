#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SCCore InheritedDataAsset
#include "InheritedDataAsset.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "HittedDB.generated.h"

class UAvailabilityLayerData;
class UHitAnimRequest;
class UFallHitRequest;

UCLASS(BlueprintType)
class SIFU_API UHittedDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fLowDistanceFromRoot;
    
    UPROPERTY(EditAnywhere)
    float m_fHighDistanceFromRoot;
    
    UPROPERTY(EditAnywhere)
    float m_fHalfAngleSouth;
    
    UPROPERTY(EditAnywhere)
    float m_fItemHalfAngleSouth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAutoKillTimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAutoKillHeightMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMediumFallHeightThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fHeavyFallHeightThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fFallMaxHeight;
    
    UPROPERTY(EditAnywhere)
    float m_fDamagePercentAssistDetectionThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fDamagePercentKillDetectionThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageHistoryNotInFightTimeOut;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageHistoryOutOfRangeTimeOut;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageHistoryDeadTimeOut;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageHistoryInvalidTimeOut;
    
    UPROPERTY(EditAnywhere)
    bool m_bTimeSinceLastHitPrevails;
    
    UPROPERTY(EditAnywhere)
    bool m_bLongestStunPrevailsBetweenHits;
    
    UPROPERTY(EditAnywhere)
    bool m_bKnockbackDurationBoundToAnimation;
    
    UPROPERTY(EditAnywhere)
    bool m_bHitDamagesDetailsDebugActivated;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_HitRecoveryAvailability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UHitAnimRequest> m_HitAnimationRequest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UFallHitRequest> m_FallHitRequest;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FallAnim;
    
    UHittedDB();
};

