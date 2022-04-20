#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "InputAction.h"
#include "Kismet/BlueprintAsyncActionBase.h"
//CROSS-MODULE INCLUDE: SCCore ESCBlendType
#include "ESCBlendType.h"
#include "AsyncTaskWaitForInput.generated.h"

class UCurveFloat;
class UAsyncTaskWaitForInput;
class USCGameplayAbility;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitForInputValidated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitForInputSkipped);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitForInputLaunched);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitForInputSkippedOnError);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FAsyncTaskWaitForInputAdditionalDelegate);

UCLASS()
class SIFU_API UAsyncTaskWaitForInput : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForInputValidated Validated;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForInputSkipped Skipped;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForInputLaunched Launched;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForInputSkippedOnError SkippedOnError;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForInput* BPF_WaitForInputWithFreezeExtraValidationDelegate(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, FAsyncTaskWaitForInputAdditionalDelegate _additionalDelegate, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForInput* BPF_WaitForInputWithFreeze(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UAsyncTaskWaitForInput();
};

