#pragma once
#include "CoreMinimal.h"
#include "EAIJokerBehaviorAgainstAttacks.h"
#include "SCAITicketEnum.h"
#include "AIAttackJokerSituationConfig.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackJokerSituationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fJokerDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCooldown;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bShouldBeDeactivatedByTargetAttack;
    
    UPROPERTY(Config, EditAnywhere)
    EAIJokerBehaviorAgainstAttacks m_eJokerBehaviorOnAIAttacks;
    
    UPROPERTY(Config, EditAnywhere)
    FSCAITicketEnum m_FallbackTicket;
    
    SIFU_API FAIAttackJokerSituationConfig();
};

