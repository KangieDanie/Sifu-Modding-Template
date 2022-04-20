#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "TriggerFriendlyDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerFriendlyDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UTriggerFriendlyDialogAction();
};

