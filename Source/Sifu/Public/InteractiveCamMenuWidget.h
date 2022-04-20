#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InteractiveCamMenuWidget.generated.h"

class AInteractiveMenu;

UCLASS(EditInlineNew)
class SIFU_API UInteractiveCamMenuWidget : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AInteractiveMenu* m_menuHandler;
    
public:
    UInteractiveCamMenuWidget();
};

