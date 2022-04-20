#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.h"
#include "SCAITriggerableActions.h"
#include "AIChangeRoleTriggerableActions.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIChangeRoleTriggerableActions : public USCAITriggerableActions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESCAICombatRoles m_eCombatRoleToAssign;
    
    UAIChangeRoleTriggerableActions();
};

