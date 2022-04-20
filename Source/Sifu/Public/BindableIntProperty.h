#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyBase.h"
#include "BindableIntProperty.generated.h"

UCLASS()
class SIFU_API UBindableIntProperty : public UBindablePropertyBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetValue(int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRef(UPARAM(Ref) int32& _iValue);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetValue() const;
    
    UBindableIntProperty();
};

