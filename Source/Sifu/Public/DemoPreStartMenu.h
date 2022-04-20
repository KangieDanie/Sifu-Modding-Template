#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "DemoPreStartMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDemoPreStartMenu : public UMenuWidget {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnAudioLanguageSetup();
    
public:
    UDemoPreStartMenu();
};

