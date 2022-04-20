#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "AIPhaseNodeSoftLinkByMCDomination.h"
#include "AIPhaseNodeSoftLink.h"
#include "ComboAIConditionIsInPhaseScenario.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsInPhaseScenario : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIPhaseNodeSoftLink> m_PhasesToTest;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIPhaseNodeSoftLinkByMCDomination> m_Phases;
    
    UComboAIConditionIsInPhaseScenario();
};

