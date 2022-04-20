#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "TriggerBlackBarsDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerBlackBarsDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UTriggerBlackBarsDialogAction();
};

