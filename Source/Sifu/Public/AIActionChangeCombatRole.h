#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "ESCAICombatRoles.h"
#include "AIActionChangeCombatRole.generated.h"

UCLASS()
class SIFU_API UAIActionChangeCombatRole : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCAICombatRoles m_eCombatRoleToAssign;
    
    UAIActionChangeCombatRole();
};

