#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "VersionWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UVersionWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString m_displayedText;
    
public:
    UVersionWidget();
};

