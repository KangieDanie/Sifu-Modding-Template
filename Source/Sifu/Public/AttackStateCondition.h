#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EAttackStates.h"
#include "AttackStateCondition.generated.h"

UCLASS()
class SIFU_API UAttackStateCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EAttackStates> m_AllowedStates;
    
    UAttackStateCondition();
};

