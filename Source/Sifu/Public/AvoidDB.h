#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EAvoidLaunchMethod.h"
#include "CardinalMatchArray.h"
//CROSS-MODULE INCLUDE: SCCore Bool
#include "Bool.h"
#include "AvoidDB.generated.h"

class UAvoidMatchCondition;
class UCurveFloat;
class UAvoidPropertyDB;

UCLASS()
class SIFU_API UAvoidDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAvoidMatchCondition> m_AvoidMatchConditionClass;
    
    UPROPERTY(EditDefaultsOnly)
    FCardinalMatchArray m_CardinalMatchArray[7];
    
    UPROPERTY(EditAnywhere)
    bool m_bHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardGaugeCost;
    
    UPROPERTY(EditAnywhere)
    bool m_bAvoidConsumStamina;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideAnimDynamicByCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AvoidMovementdynamic;
    
    UPROPERTY(EditAnywhere)
    float m_fAvoidDuration;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameBuildUp;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameRelease;
    
    UPROPERTY(EditAnywhere)
    float m_fTrackingDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fJumpSelectionAngleWidth;
    
    UPROPERTY(EditAnywhere)
    float m_fDuckSelectionAngleWidth;
    
    UPROPERTY(EditAnywhere)
    float m_fDodgeAvoidNorthAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fDodgeAvoidSouthAngle;
    
    UPROPERTY(EditAnywhere)
    UAvoidPropertyDB* m_DefaultAvoidPropertyDBs[7];
    
    UPROPERTY(EditAnywhere)
    EAvoidLaunchMethod m_eAvoidLaunchMethodOnHitDismissed;
    
    UPROPERTY(EditAnywhere)
    float m_fAvoidedDuration[7];
    
    UPROPERTY(EditAnywhere)
    float m_SuperAvoidedDuration[7];
    
    UPROPERTY(EditAnywhere)
    float m_fAvoidSuccessfulRefillValue;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperAvoidSuccessfulRefillValue;
    
    UPROPERTY(EditAnywhere)
    float m_fAvoidSuccessfulGuardGaugeRefillValue;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperAvoidSuccessfulGuardGaugeRefillValue;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AvoidedAttackScaleCurves[7];
    
    UPROPERTY(EditDefaultsOnly)
    FBool m_AvoidDismissesPerfectLink[7];
    
    UPROPERTY(EditDefaultsOnly)
    FBool m_SuperAvoidDismissesPerfectLink[7];
    
    UPROPERTY(EditAnywhere)
    int32 m_iOrdersAllowedToPushAvoidSuccessfulLayer;
    
    UPROPERTY(EditAnywhere)
    int32 m_iSuperAvoidOrders;
    
private:
    UPROPERTY(Transient)
    UAvoidMatchCondition* m_AvoidMatchCondition;
    
public:
    UAvoidDB();
};

