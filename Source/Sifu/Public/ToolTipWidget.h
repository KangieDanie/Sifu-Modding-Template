#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ToolTipWidget.generated.h"

class UButtonUserWidget;

UCLASS(EditInlineNew)
class SIFU_API UToolTipWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UButtonUserWidget> m_Button;
    
    UToolTipWidget();
};

