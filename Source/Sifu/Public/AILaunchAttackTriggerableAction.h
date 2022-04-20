#pragma once
#include "CoreMinimal.h"
#include "SCAITriggerableActions.h"
#include "SCAITicketEnum.h"
#include "AILaunchAttackTriggerableAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAILaunchAttackTriggerableAction : public USCAITriggerableActions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCAITicketEnum m_ComboStartNodeEnumValue;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckCanAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_bTestTicketAvailable;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetTicketCooldown;
    
    UAILaunchAttackTriggerableAction();
};

