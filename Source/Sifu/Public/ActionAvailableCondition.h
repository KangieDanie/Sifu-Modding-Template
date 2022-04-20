#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "InputAction.h"
#include "ActionAvailableCondition.generated.h"

UCLASS()
class SIFU_API UActionAvailableCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputAction m_eAction;
    
    UActionAvailableCondition();
};

