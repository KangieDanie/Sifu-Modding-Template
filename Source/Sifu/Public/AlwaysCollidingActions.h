#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "AlwaysCollidingActions.generated.h"

USTRUCT(BlueprintType)
struct FAlwaysCollidingActions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<InputAction> m_Actions;
    
    SIFU_API FAlwaysCollidingActions();
};

