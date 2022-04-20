#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "EMenuEnum.h"
#include "InputAction.h"
#include "PopupWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UPopupWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputAction m_eValidateAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputAction m_eCancelAction;
    
private:
    UFUNCTION()
    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_OnChoseB();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_OnChoseA(int32 _playerID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetContent(const FText& _title, const FText& _message, const FText& _choiceA, const FText& _choiceB);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsUsingChoiceB() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsUsingChoiceA() const;
    
public:
    UPopupWidget();
};

