#pragma once
#include "CoreMinimal.h"
#include "BaseUseCondition.h"
#include "EDefenseTactics.h"
#include "DefenseTacticUseCondition.generated.h"

UCLASS(Abstract)
class SIFU_API UDefenseTacticUseCondition : public UBaseUseCondition {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    EDefenseTactics BPE_SelectBestDefenseTactic(bool& _bOutTriggerCounter);
    
    UDefenseTacticUseCondition();
};

