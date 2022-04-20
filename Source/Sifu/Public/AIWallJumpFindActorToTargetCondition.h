#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ComboAIConditionFindActorEnvQuery.h"
#include "AIWallJumpFindActorToTargetCondition.generated.h"

class UAIActionWallJumpAttack;

UCLASS(EditInlineNew)
class SIFU_API UAIWallJumpFindActorToTargetCondition : public UComboAIConditionFindActorEnvQuery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionWallJumpAttack> m_AttackAction;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<UAIActionWallJumpAttack> BPF_GetAttackActionClass() const;
    
    UFUNCTION(BlueprintPure)
    UAIActionWallJumpAttack* BPF_GetAttackAction() const;
    
    UAIWallJumpFindActorToTargetCondition();
};

