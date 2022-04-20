#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "InputAction.h"
#include "MovableActionCondition.generated.h"

UCLASS()
class SIFU_API UMovableActionCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputAction m_HasAction;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreNonMovables;
    
    UMovableActionCondition();
};

