#pragma once
#include "CoreMinimal.h"
#include "EGameOptionTypes.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "GameOptionOverride.h"
#include "GameOptionTypeHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UGameOptionTypeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetUserSettingValue(EGameOptionTypes _eSetting, float _fValue);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_RestoreGameOptionOverrides(TArray<FGameOptionOverride>& _inOutGameOptionOverrides, bool _bResetOptionOverridesOnRestore);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_RestoreGameOption(FGameOptionOverride& _inOutGameOptionOverride, bool _bResetOptionOverrideOnRestore);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_OverrideGameOptions(TArray<FGameOptionOverride>& _outGameOptionOverrides);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_OverrideGameOption(FGameOptionOverride& _outGameOptionOverride);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetValueFromRatio(EGameOptionTypes _eInOption, float _fInRatio);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetValueClamped(EGameOptionTypes _eInOption, float _fInValueToClamp);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetValueAsBool(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetValue(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetUserSettingValueByOptionType(EGameOptionTypes _eOption);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetRatioFromValue(EGameOptionTypes _eInOption, float _fInValue);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetRatio(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetRange(EGameOptionTypes _eInOption, float& _fOutMin, float& _fOutMax);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetDefaultValue(EGameOptionTypes _eInOption);
    
    UGameOptionTypeHelper();
};

