#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyBase.h"
#include "BindableEnumProperty.generated.h"

UCLASS()
class SIFU_API UBindableEnumProperty : public UBindablePropertyBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetValue(uint8 _uiValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRef(UPARAM(Ref) uint8& _uiValue);
    
    UFUNCTION(BlueprintPure)
    uint8 BPF_GetValue() const;
    
    UBindableEnumProperty();
};

