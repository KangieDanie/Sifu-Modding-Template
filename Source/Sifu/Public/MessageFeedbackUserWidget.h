#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "EMessageReason.h"
#include "MessageFeedbackUserWidget.generated.h"

class ABaseReplayController;

UCLASS(EditInlineNew)
class SIFU_API UMessageFeedbackUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ABaseReplayController* m_Controller;
    
    UPROPERTY(EditDefaultsOnly)
    EMessageReason m_eShowForReason;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsActive() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Show(bool _bHasActiveMessage);
    
public:
    UMessageFeedbackUserWidget();
};

