#pragma once
#include "CoreMinimal.h"
#include "WidgetPoolElement.generated.h"

class USCUserWidget;

USTRUCT(BlueprintType)
struct FWidgetPoolElement {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    USCUserWidget* m_Widget;
    
    SIFU_API FWidgetPoolElement();
};

