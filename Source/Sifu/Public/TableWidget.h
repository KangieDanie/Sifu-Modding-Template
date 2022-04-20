#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
#include "Types/SlateEnums.h"
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: UMG VerticalBox
#include "Components/VerticalBox.h"

//CROSS-MODULE INCLUDE: SlateCore Margin
#include "Layout/Margin.h"
//CROSS-MODULE INCLUDE: UMG SlateChildSize
#include "Components/SlateWrapperTypes.h"

//CROSS-MODULE INCLUDE: SlateCore EFocusCause
//CROSS-MODULE INCLUDE: SlateCore EUINavigation
#include "ECycleDirection.h"
#include "TableWidget.generated.h"

class UButtonUserWidget;
class UHorizontalBox;
class UWidget;
class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTableWidget_OnItemRightClicked, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTableWidget_OnItemClicked, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTableWidget_OnItemFocused, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTableWidget_OnItemLostFocus, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FTableWidget_OnItemFocused_Bindable, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTableWidget_OnItemSelected, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTableWidget_OnItemNavigation, UButtonUserWidget*, _button, EUINavigation, _eNavigation, int32, _iItemIndex);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FTableWidget_OnItemClicked_Bindable, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FTableWidget_OnItemLostFocus_Bindable, UButtonUserWidget*, _button, EFocusCause, _eCause);

UCLASS()
class UTableWidget : public UVerticalBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomLayout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_LeftItemPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_RightItemPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_CenterItemsPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize m_ItemSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> m_ItemHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> m_ItemVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_RowPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize m_RowSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> m_RowHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> m_RowVerticalAlignment;
    
    UPROPERTY(BlueprintAssignable)
    FTableWidget_OnItemClicked m_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FTableWidget_OnItemRightClicked m_OnItemRightClicked;
    
    UPROPERTY(BlueprintAssignable)
    FTableWidget_OnItemFocused m_OnItemFocused;
    
    UPROPERTY(BlueprintAssignable)
    FTableWidget_OnItemLostFocus m_OnItemLostFocus;
    
    UPROPERTY(BlueprintAssignable)
    FTableWidget_OnItemSelected m_OnItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FTableWidget_OnItemNavigation m_OnItemNavigation;
    
    UPROPERTY(EditAnywhere)
    FTableWidget_OnItemClicked_Bindable m_OnItemClicked_Bindable;
    
    UPROPERTY(EditAnywhere)
    FTableWidget_OnItemFocused_Bindable m_OnItemFocused_Bindable;
    
    UPROPERTY(EditAnywhere)
    FTableWidget_OnItemLostFocus_Bindable m_OnItemLostFocus_Bindable;
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomNavigation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iItemsPerRow;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UHorizontalBox> m_RowWidgetClass;
    
public:
    UFUNCTION()
    void OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton);
    
    UFUNCTION()
    void OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION()
    void OnItemNavigation(UButtonUserWidget* _button, EUINavigation _eNavigation);
    
    UFUNCTION()
    void OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION(BlueprintPure)
    UButtonUserWidget* BPF_GetSelectedButton();
    
    UFUNCTION(BlueprintPure)
    UWidget* BPF_GetNextItem(UWidget* currentButton, ECycleDirection _eDirection, bool _bSkipDisabled);
    
    UFUNCTION(BlueprintCallable)
    UWidget* BPF_GetLastVisibleItem();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetItemIndex(UWidget* _item);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetItemAtIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetChildrenCount();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddItem(UUserWidget* _widget);
    
    UTableWidget();
};

