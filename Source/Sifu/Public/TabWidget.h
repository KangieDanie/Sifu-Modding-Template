#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "TabWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTabWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint8 m_uiEnumValue;
    
public:
    UFUNCTION(BlueprintCallable)
    uint8 BPF_GetEnumValue();
    
    UTabWidget();
};

