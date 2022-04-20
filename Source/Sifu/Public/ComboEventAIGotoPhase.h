#pragma once
#include "CoreMinimal.h"
#include "ComboEvent.h"
#include "AIPhaseNodeSoftLink.h"
#include "SCAITicketEnum.h"
#include "ComboEventAIGotoPhase.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboEventAIGotoPhase : public UComboEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIPhaseNodeSoftLink m_Link;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSCAITicketEnum> m_ResetTickets;
    
public:
    UComboEventAIGotoPhase();
};

