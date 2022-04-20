#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SCBaseUserWidget.generated.h"

class USCLevelSequence;

UCLASS(EditInlineNew)
class SCCORE_API USCBaseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCinematicStarted(const USCLevelSequence* _inSequence);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCinematicFinished(const USCLevelSequence* _inSequence);
    
public:
    USCBaseUserWidget();
};

