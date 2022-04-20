#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin SCConversationRule
#include "SCConversationRule.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin SCConversationInteractiveChoice
#include "SCConversationInteractiveChoice.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin SCDialogData
#include "SCDialogData.h"
#include "SCDialogWidget.generated.h"

class USCDialogComponent;

UCLASS(EditInlineNew)
class SIFU_API USCDialogWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bHandleShowSubtitleOption;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAllDelegates();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsRuleFulfilled(const FSCConversationRule& _rule);
    
    UFUNCTION(BlueprintCallable)
    void BPF_InteractiveDialogTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DialogSelected(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_AreRulesFulfilled(const TArray<FSCConversationRule>& _rules);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAllDelegates();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ShowBlackBarsRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnNextSegmentHasChoices();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDialogSegmentCompleted(USCDialogComponent* _dialogLauncher, const bool _bGenericSubtitles);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDialogCompleted(USCDialogComponent* _dialogLauncher);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InteractiveSequenceStarted(const FSCConversationInteractiveChoice& _choice);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InteractiveDialogInterrupted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DialogLaunched(USCDialogComponent* _dialogLauncher, const FSCDialogData& _dialogData, const bool _bGenericSubtitles);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DialogCanceled(USCDialogComponent* _dialogLauncher, const bool _bGenericSubtitles);
    
    USCDialogWidget();
};

