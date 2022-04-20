#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyBase.h"
#include "BindableBoolProperty.generated.h"

UCLASS()
class SIFU_API UBindableBoolProperty : public UBindablePropertyBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetValue(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRef(UPARAM(Ref) bool& _bValue);
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetValue() const;
    
    UBindableBoolProperty();
};

