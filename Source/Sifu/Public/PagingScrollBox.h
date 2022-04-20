#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: UMG ScrollBox
//CROSS-MODULE INCLUDE: SlateCore EFocusCause
#include "Types/SlateEnums.h"
#include "Components/ScrollBox.h"

#include "PagingScrollBox.generated.h"

class UWidget;
class UButtonUserWidget;
class UUserWidget;
class USCUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPagingScrollBox_OnItemRightClicked, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPagingScrollBox_OnItemClicked, UButtonUserWidget*, _button, bool, _bWithMouse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPagingScrollBox_OnItemFocused, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPagingScrollBox_OnItemLostFocus, UButtonUserWidget*, _button, EFocusCause, _eCause);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPagingScrollBox_OnItemSelected, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPagingScrollBox_OnItemVisible, int32, _iDataIndex, UUserWidget*, _cell);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPagingScrollBox_ItemPreviewButtonPressed);

UCLASS()
class UPagingScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_OnItemClicked m_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_OnItemRightClicked m_OnItemRightClicked;
    
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_OnItemFocused m_OnItemFocused;
    
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_OnItemLostFocus m_OnItemLostFocus;
    
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_OnItemSelected m_OnItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_OnItemVisible m_OnItemVisible;
    
    UPROPERTY(BlueprintAssignable)
    FPagingScrollBox_ItemPreviewButtonPressed m_ItemPreviewButtonPressed;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 m_iLoadedRowCount;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USCUserWidget> m_CellClass;
    
    UPROPERTY(Export, Transient)
    TArray<UWidget*> m_Headers;
    
    UFUNCTION()
    void OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton);
    
    UFUNCTION()
    void OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION()
    void OnItemPreviewButtonPressedCallback();
    
protected:
    UFUNCTION()
    void OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetWidgetFromSectionDataIndex(int32 _iSection, int32 _iDataIndex);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetWidgetFromDataIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetWidgetDataIndex(const int32 iRow, const int32 iCol) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRowDataIndex(const int32 iRow) const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetLastVisibleWidgetFromSection(int32 _iSection);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetLastVisibleCell();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetItemCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDataIndexFromWidget(UUserWidget* _widget);
    
    UPagingScrollBox();
};

