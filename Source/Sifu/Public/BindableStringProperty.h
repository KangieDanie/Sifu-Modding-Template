#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyBase.h"
#include "BindableStringProperty.generated.h"

UCLASS()
class SIFU_API UBindableStringProperty : public UBindablePropertyBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetValue(const FString& _value);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRef(UPARAM(Ref) FString& _value);
    
    UFUNCTION(BlueprintPure)
    FString BPF_GetValue() const;
    
    UBindableStringProperty();
};

