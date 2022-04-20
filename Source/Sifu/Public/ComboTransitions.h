#pragma once
#include "CoreMinimal.h"
#include "ComboTransition.h"
#include "ComboTransitions.generated.h"

USTRUCT(BlueprintType)
struct FComboTransitions {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FComboTransition> m_Transitions;
    
    UPROPERTY(VisibleAnywhere)
    FName m_ParentNodeName;
    
    SIFU_API FComboTransitions();
};

