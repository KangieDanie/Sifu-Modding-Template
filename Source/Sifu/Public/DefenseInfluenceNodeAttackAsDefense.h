#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "SCAITicketEnum.h"
#include "DefenseInfluenceNodeAttackAsDefense.generated.h"

UCLASS()
class SIFU_API UDefenseInfluenceNodeAttackAsDefense : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fTimeBeforeTagetAttackHit;
    
    UPROPERTY()
    FName m_ComboTrigger;
    
    UPROPERTY(EditAnywhere)
    FSCAITicketEnum m_AttackTicket;
    
public:
    UDefenseInfluenceNodeAttackAsDefense();
};

