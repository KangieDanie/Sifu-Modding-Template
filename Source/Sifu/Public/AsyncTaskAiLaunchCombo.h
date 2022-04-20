#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"

#include "AIComboLaunchParameters.h"
#include "AsyncTaskAiLaunchCombo.generated.h"

class UAsyncTaskAiLaunchCombo;
class UAIActionLaunchCombo;
class UAIFightingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskAiLaunchComboOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskAiLaunchComboOnFailure);

UCLASS()
class SIFU_API UAsyncTaskAiLaunchCombo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskAiLaunchComboOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskAiLaunchComboOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiLaunchCombo* BPF_AIAction_LaunchCombo(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, UAIActionLaunchCombo*& _action);
    
    UAsyncTaskAiLaunchCombo();
};

