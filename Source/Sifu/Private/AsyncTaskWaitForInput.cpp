#include "AsyncTaskWaitForInput.h"
#include "Templates/SubclassOf.h"

class USCGameplayAbility;
class UObject;
class UCurveFloat;
class UAsyncTaskWaitForInput;

UAsyncTaskWaitForInput* UAsyncTaskWaitForInput::BPF_WaitForInputWithFreezeExtraValidationDelegate(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, FAsyncTaskWaitForInputAdditionalDelegate _additionalDelegate, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable) {
    return NULL;
}

UAsyncTaskWaitForInput* UAsyncTaskWaitForInput::BPF_WaitForInputWithFreeze(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable) {
    return NULL;
}

void UAsyncTaskWaitForInput::BPF_Cancel() {
}

UAsyncTaskWaitForInput::UAsyncTaskWaitForInput() {
}

