#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ParriedProfile.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ParryAnimationCharacterQuadrantArray.h"
#include "ParryDB.generated.h"

class UParryMatch;
class UParryPropertyDB;
class UCurveFloat;
class UAvailabilityLayerData;

UCLASS()
class SIFU_API UParryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParryAnimationCharacterQuadrantArray m_ParryAnimations;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UParryMatch> m_ParryMatchClass;
    
    UPROPERTY(EditAnywhere)
    float m_fParryDuration;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameBuildUp;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameRelease;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ParryMovementdynamic;
    
    UPROPERTY(EditAnywhere)
    bool m_bParryConsumStamina;
    
    UPROPERTY(EditAnywhere)
    bool m_bParryConsumStaminaWhenSucceed;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideAnimDynamicByCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fTrackingDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fParrySelectionAxisOffset;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_ParryLayerDataOnSucceed;
    
    UPROPERTY(EditAnywhere)
    TArray<FParriedProfile> m_ParriedProfile;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ParriedAttackScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fFrontBackMargin;
    
    UPROPERTY(EditAnywhere)
    float m_fLeftRightMargin;
    
    UPROPERTY(EditAnywhere)
    float m_fHighLowMargin;
    
    UPROPERTY(EditAnywhere)
    float m_fFrontBackOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fLeftRightOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fHighLowOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardGaugeCost;
    
    UPROPERTY(EditAnywhere)
    bool m_bHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere)
    UParryPropertyDB* m_DefaultParryPropertyDB;
    
private:
    UPROPERTY(Transient)
    UParryMatch* m_ParryMatch;
    
public:
    UParryDB();
};

