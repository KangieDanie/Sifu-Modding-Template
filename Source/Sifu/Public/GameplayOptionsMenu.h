#pragma once
#include "CoreMinimal.h"
#include "EGameOptionTypes.h"
#include "MenuWidget.h"
#include "GameplayOptionsMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGameplayOptionsMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameOptionValue(EGameOptionTypes _eOptionType, float _fOptionValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameOptionRatio(EGameOptionTypes _eOptionType, float _fOptionRatio);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreOptionDefaultValue(EGameOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsModificationHasBeenMade();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Default();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyCurrentOptionsToDefault();
    
    UGameplayOptionsMenu();
};

