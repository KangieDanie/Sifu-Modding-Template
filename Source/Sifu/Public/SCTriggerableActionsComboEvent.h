#pragma once
#include "CoreMinimal.h"
#include "ComboEvent.h"
#include "SCTriggerableActionsComboEvent.generated.h"

class USCAITriggerableActions;

UCLASS(EditInlineNew)
class SIFU_API USCTriggerableActionsComboEvent : public UComboEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export)
    TArray<USCAITriggerableActions*> m_ActionsToTrigger;
    
public:
    USCTriggerableActionsComboEvent();
};

