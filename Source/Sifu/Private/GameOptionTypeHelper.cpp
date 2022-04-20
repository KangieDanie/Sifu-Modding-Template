#include "GameOptionTypeHelper.h"

void UGameOptionTypeHelper::BPF_SetUserSettingValue(EGameOptionTypes _eSetting, float _fValue) {
}

bool UGameOptionTypeHelper::BPF_RestoreGameOptionOverrides(TArray<FGameOptionOverride>& _inOutGameOptionOverrides, bool _bResetOptionOverridesOnRestore) {
    return false;
}

bool UGameOptionTypeHelper::BPF_RestoreGameOption(FGameOptionOverride& _inOutGameOptionOverride, bool _bResetOptionOverrideOnRestore) {
    return false;
}

bool UGameOptionTypeHelper::BPF_OverrideGameOptions(TArray<FGameOptionOverride>& _outGameOptionOverrides) {
    return false;
}

bool UGameOptionTypeHelper::BPF_OverrideGameOption(FGameOptionOverride& _outGameOptionOverride) {
    return false;
}

float UGameOptionTypeHelper::BPF_GetValueFromRatio(EGameOptionTypes _eInOption, float _fInRatio) {
    return 0.0f;
}

float UGameOptionTypeHelper::BPF_GetValueClamped(EGameOptionTypes _eInOption, float _fInValueToClamp) {
    return 0.0f;
}

bool UGameOptionTypeHelper::BPF_GetValueAsBool(EGameOptionTypes _eInOption) {
    return false;
}

float UGameOptionTypeHelper::BPF_GetValue(EGameOptionTypes _eInOption) {
    return 0.0f;
}

float UGameOptionTypeHelper::BPF_GetUserSettingValueByOptionType(EGameOptionTypes _eOption) {
    return 0.0f;
}

float UGameOptionTypeHelper::BPF_GetRatioFromValue(EGameOptionTypes _eInOption, float _fInValue) {
    return 0.0f;
}

float UGameOptionTypeHelper::BPF_GetRatio(EGameOptionTypes _eInOption) {
    return 0.0f;
}

void UGameOptionTypeHelper::BPF_GetRange(EGameOptionTypes _eInOption, float& _fOutMin, float& _fOutMax) {
}

float UGameOptionTypeHelper::BPF_GetDefaultValue(EGameOptionTypes _eInOption) {
    return 0.0f;
}

UGameOptionTypeHelper::UGameOptionTypeHelper() {
}

