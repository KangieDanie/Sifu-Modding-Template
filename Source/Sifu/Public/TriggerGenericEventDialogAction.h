#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "TriggerGenericEventDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerGenericEventDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UTriggerGenericEventDialogAction();
};

