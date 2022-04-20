#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "EQuadrantTypes.h"
#include "HUDWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UHUDWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EQuadrantTypes m_eCurrentQuadrant;
    
    UFUNCTION(BlueprintCallable)
    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 _uiNewIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComboEnd(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnComboChangeQuadrant(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnComboChangeNextImg(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeQuadrantState(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnAltAttack(EQuadrantTypes _eNewQuadrant, uint8 _uiCurrentComboIndex);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAttacking() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ResetFillingsFromQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_RegularAttack(EQuadrantTypes _eAttackStartQuadrant, EQuadrantTypes _eAttackEndQuadrant, uint8 _uiAttackIndex, bool _bFromEditor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshQuadrantError(EQuadrantTypes _eQuadrant, bool _bError);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRebuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ComboStart(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ComboEnds(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeQuadrant(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AttackEndsInOtherQuadrant(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_AlternativeAttack(EQuadrantTypes _eAttackStartQuadrant, EQuadrantTypes _eAttackEndQuadrant, bool _bFromEditor);
    
    UHUDWidget();
};

