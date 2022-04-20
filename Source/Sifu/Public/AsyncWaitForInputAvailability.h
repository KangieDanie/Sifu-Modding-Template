#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "InputAction.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncWaitForInputAvailability.generated.h"

class UAsyncWaitForInputAvailability;
class ABaseCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncWaitForInputAvailabilityOnInputAvailable);

UCLASS()
class SIFU_API UAsyncWaitForInputAvailability : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncWaitForInputAvailabilityOnInputAvailable OnInputAvailable;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncWaitForInputAvailability* BPF_WaitForInputAvailability(ABaseCharacter* _inCharacter, InputAction _eInInputAction);
    
    UAsyncWaitForInputAvailability();
};

