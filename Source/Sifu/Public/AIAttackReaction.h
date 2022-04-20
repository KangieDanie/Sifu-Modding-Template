#pragma once
#include "CoreMinimal.h"
#include "AIConditionClassInstance.h"
#include "SCAITicketEnum.h"
#include "AIAttackReaction.generated.h"

class UComboTransitionCondition;

USTRUCT(BlueprintType)
struct FAIAttackReaction {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UComboTransitionCondition*> m_Conditions;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanInterruptMoveToAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanInterruptAttackWhenAvailable;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanEndComboAfterOnGoingAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanInterruptPassiveTicket;
    
    UPROPERTY(EditAnywhere)
    FSCAITicketEnum m_TicketNameEnumValue;
    
    SIFU_API FAIAttackReaction();
};

