#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyBase.h"
#include "BindableFloatProperty.generated.h"

UCLASS()
class SIFU_API UBindableFloatProperty : public UBindablePropertyBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRef(UPARAM(Ref) float& _fValue);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetValue() const;
    
    UBindableFloatProperty();
};

