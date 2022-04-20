#pragma once
#include "CoreMinimal.h"
#include "SCAITicketEnum.h"
#include "AIComboCondition.h"
#include "ComboAIConditionRequestPassiveAttackTicket.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionRequestPassiveAttackTicket : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCAITicketEnum m_TicketNameEnumValue;
    
    UPROPERTY(EditAnywhere)
    bool m_bReleaseTicketInstantly;
    
    UComboAIConditionRequestPassiveAttackTicket();
};

