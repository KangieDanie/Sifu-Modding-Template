#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "EBossKillingWay.h"
#include "TriggerBossKillSpareDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerBossKillSpareDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EBossKillingWay m_eBossKillingWay;
    
public:
    UTriggerBossKillSpareDialogAction();
};

