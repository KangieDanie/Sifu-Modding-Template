#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"

#include "AsyncTaskAiAction.generated.h"

class UAsyncTaskAiAction;
class UAIFightingComponent;
class USCAiAction;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskAiActionOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskAiActionOnFailure);

UCLASS()
class SIFU_API UAsyncTaskAiAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskAiActionOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskAiActionOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiAction* BPF_ScheduleAIAction(UAIFightingComponent* _aiComponent, TSubclassOf<USCAiAction> _actionClass, USCAiAction* _action, USCAiAction*& _scheduledAction, bool _bCancelPendingActions);
    
    UAsyncTaskAiAction();
};

