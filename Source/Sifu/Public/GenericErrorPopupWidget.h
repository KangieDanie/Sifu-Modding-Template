#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "GenericErrorPopupWidget.generated.h"

class UPopupWidget;

UCLASS(EditInlineNew)
class SIFU_API UGenericErrorPopupWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintNativeEvent)
    UPopupWidget* BPE_GetPopupWidget();
    
public:
    UGenericErrorPopupWidget();
};

