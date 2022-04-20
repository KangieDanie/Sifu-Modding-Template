#pragma once
#include "CoreMinimal.h"
#include "SCAITriggerableActionsArray.generated.h"

class USCAITriggerableActions;

USTRUCT(BlueprintType)
struct FSCAITriggerableActionsArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<USCAITriggerableActions*> m_Actions;
    
    SIFU_API FSCAITriggerableActionsArray();
};

