#pragma once
#include "CoreMinimal.h"
#include "AIAttackJokerSituationConfigsPerDominationStep.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EAIWuguanTicketEvaluation.h"
#include "EAIAttackTicketJokerSituation.h"
#include "SCAITicketEnum.h"
#include "TicketSettings.generated.h"

class UAIAttackTicketData;
class UOrderDB;

UCLASS(DefaultConfig, Config=WuguanAI)
class SIFU_API UTicketSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketScoreFactors;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_PositionTicketScoreFactors;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_WeaponTicketScoreFactors;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIAttackTicketJokerSituation, FAIAttackJokerSituationConfigsPerDominationStep> m_AttackTicketJokerSituationsConfigs;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TSoftClassPtr<UOrderDB>, EAIAttackTicketJokerSituation> m_OrderDBToJokerSituationMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bActivateWeaponTicketManager;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDefaultWeaponTicketCooldown;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fWeaponTicketCooldownIncreaseValue;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fWeaponTicketCooldownDecreaseValue;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDefaultMaxDistanceToWeapon;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMinDistanceForCandidateAttackCancel;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMinDistanceForAttackTicketTimeOut;
    
private:
    UPROPERTY(Config, EditAnywhere)
    TMap<FSCAITicketEnum, TSoftObjectPtr<UAIAttackTicketData>> m_AttackTicketsMap;
    
public:
    UTicketSettings();
};

