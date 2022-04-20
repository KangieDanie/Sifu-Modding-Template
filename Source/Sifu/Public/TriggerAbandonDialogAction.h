#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "TriggerAbandonDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerAbandonDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UTriggerAbandonDialogAction();
};

