#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DodgeConfigStruct.h"
#include "DodgeDB.generated.h"

class UCurveFloat;
class UDodgeAnimRequest;

UCLASS()
class SIFU_API UDodgeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxDodgeRetargettingDistance;
    
    UPROPERTY(EditAnywhere)
    FDodgeConfigStruct m_dodgeConfigs[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bWantDodgeLock;
    
    UPROPERTY(EditAnywhere)
    float m_fDodgeOpponentAttackRangeTolerance;
    
    UPROPERTY(EditAnywhere)
    bool m_bDefaultDodgeQuadrantSwitchActivated;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertRedirectOnBackQuadrant;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_GuardGaugeCostOverWeightRatio;
    
    UPROPERTY(EditAnywhere)
    bool m_bSmoothedOrderDodgeNotifyStartDT;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDodgeAnimRequest> m_animRequest;
    
    UDodgeDB();
};

