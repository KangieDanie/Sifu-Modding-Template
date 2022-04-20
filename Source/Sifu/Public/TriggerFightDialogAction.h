#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "TriggerFightDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerFightDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorSentToFight;
    
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
public:
    UTriggerFightDialogAction();
};

