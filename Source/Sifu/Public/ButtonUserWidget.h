#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE: SlateCore EButtonClickMethod
#include "Types/SlateEnums.h"
#include "ButtonAction.h"
//CROSS-MODULE INCLUDE: SlateCore EFocusCause

//CROSS-MODULE INCLUDE: SlateCore EUINavigation

//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "Styling/SlateBrush.h"
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
#include "ButtonUserWidget.generated.h"

class UButtonUserWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnFocusReceived_Bindable, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FButtonUserWidget_IsActionEnabledDelegate, const UButtonUserWidget*, _button, const FButtonAction&, _action);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnFocusLost_Bindable, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FButtonUserWidget_OnHoldCanceled_Bindable, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnExecuteAction3, UButtonUserWidget*, _button, const FButtonAction&, _action);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FButtonUserWidget_OnHoldStarted_Bindable, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnInputActionPressed_Bindable, UButtonUserWidget*, _button, InputAction, _eInput);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnNavigation, UButtonUserWidget*, _button, EUINavigation, _eNavigation);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnClick_Bindable, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnInputActionPressed, UButtonUserWidget*, _button, InputAction, _eInput);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnNavigation_Bindable, UButtonUserWidget*, _button, EUINavigation, _eNavigation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidget_OnHoldCanceled, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnFocusLost, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FButtonUserWidget_OnHoldSuccess_Bindable, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnFocusReceived, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnClick, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnRightClick, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidget_OnSelect, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidget_OnDeselect, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidget_OnHoldStarted, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidget_OnHoldSuccess, UButtonUserWidget*, _button);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnExecuteAction1, UButtonUserWidget*, _button, const FButtonAction&, _action);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonUserWidget_OnExecuteAction2, UButtonUserWidget*, _button, const FButtonAction&, _action);

UCLASS(EditInlineNew)
class SIFU_API UButtonUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_IsActionEnabledDelegate m_IsActionEnabledDelegate;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnFocusReceived_Bindable m_OnFocusReceived_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnFocusLost_Bindable m_OnFocusLost_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnClick_Bindable m_OnClick_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnInputActionPressed_Bindable m_OnInputActionPressed_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnNavigation_Bindable m_OnNavigation_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnHoldStarted_Bindable m_OnHoldStarted_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnHoldCanceled_Bindable m_OnHoldCanceled_Bindable;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnHoldSuccess_Bindable m_OnHoldSuccess_Bindable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnFocusReceived m_OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnFocusLost m_OnFocusLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnClick m_OnClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnRightClick m_OnRightClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnInputActionPressed m_OnInputActionPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnSelect m_OnSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnDeselect m_OnDeselect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnNavigation m_OnNavigation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnHoldStarted m_OnHoldStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnHoldCanceled m_OnHoldCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidget_OnHoldSuccess m_OnHoldSuccess;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush m_DefaultStateBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush m_MouseOverStateBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush m_MouseDownStateBrush;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseFocusStateBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush m_FocusStateBrush;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSlateBrush m_CurrentStateBrush;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> m_eClickMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fHoldDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bFocusOnVisible;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonAction m_Action1;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnExecuteAction1 m_OnExecuteAction1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonAction m_Action2;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnExecuteAction2 m_OnExecuteAction2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonAction m_Action3;
    
    UPROPERTY(EditAnywhere)
    FButtonUserWidget_OnExecuteAction3 m_OnExecuteAction3;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsClickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bFocusOnMouseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLoseFocusOnMouseLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSelectOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSelectOnNavigationFocus;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eSelectedVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eDeselectedVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eMouseOverVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eMouseOutVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsSelected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bPlayClickSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bPlayRightClickSound;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsMouseOver;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsMouseDown;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetSelected(bool _bSelected, bool _bForce);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsActionEnabled(const FButtonAction& _action) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetIsSelected();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetHoldProgress() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRightClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnInputActionPressed(InputAction _eAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDeselected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnClicked();
    
public:
    UButtonUserWidget();
};

