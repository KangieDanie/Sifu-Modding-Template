#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "EditableOrderType.h"
#include "FocusExecutionAbility.generated.h"

UCLASS()
class SIFU_API UFocusExecutionAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_InstigatorOrderType;
    
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_VictimOrderType;
    
    UFocusExecutionAbility();
};

