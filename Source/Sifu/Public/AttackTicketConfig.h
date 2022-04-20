#pragma once
#include "CoreMinimal.h"
#include "EPassiveTicketBehaviorAginstJoker.h"
#include "FAttackTicketBehavior.h"
#include "TimerAndOffset.h"
#include "ESCAICombatRoles.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
#include "SCAITicketEnum.h"
#include "AttackTicketConfig.generated.h"

USTRUCT(BlueprintType)
struct FAttackTicketConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAttackTicketBehavior m_eBehavior;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bTicketIsAlwaysAvailable;
    
    UPROPERTY(Config)
    ESCAICombatRoles m_eCombatRole;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_eCombatRolesMask;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iCount;
    
    UPROPERTY(Config, EditAnywhere)
    FTimerAndOffset m_Cooldowns[3];
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCooldownOffsetOnSynchedFires;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCooldownSynchFiresTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fForcedCooldownOnDirectOpponentDeath;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bIsRepeated;
    
    UPROPERTY(Config, EditAnywhere)
    FInt32Range m_Repeats;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bUseMinDistanceToPosition;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMinDistanceToPosition;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableIneligibleTimerOnRelease;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bIsNotUsedInCombo;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMoveToTimeoutValue;
    
    UPROPERTY(Config, EditAnywhere)
    EPassiveTicketBehaviorAginstJoker m_eBehaviorAgainstJoker;
    
    UPROPERTY(Config, EditAnywhere)
    FSCAITicketEnum m_FallbackTicket;
    
    SIFU_API FAttackTicketConfig();
};

