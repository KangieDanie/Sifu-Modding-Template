#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
#include "StopLowStructureOnPrefightAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UStopLowStructureOnPrefightAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorKey;
    
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
public:
    UStopLowStructureOnPrefightAction();
};

