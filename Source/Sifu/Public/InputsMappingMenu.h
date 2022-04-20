#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MenuWidget.h"
#include "EMappableFieldScaleTypes.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "Layout/Margin.h"
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
#include "Fonts/SlateFontInfo.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "Styling/SlateBrush.h"
#include "InputKeyMappingHandler.h"
#include "ERemappingFinishedStates.h"
#include "ERemappingAllowedInputTypes.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "InputsMappingMenu.generated.h"

class UMappableInputsDB;
class UInputMappingWidget;
class UPanelWidget;
class UButtonUserWidget;

UCLASS(EditInlineNew)
class SIFU_API UInputsMappingMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMappableInputsDB* m_MappableInputsDB;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInputMappingWidget> m_InputMappingWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FMargin m_sectionTitleMargin;
    
    UPROPERTY(EditAnywhere)
    FSlateFontInfo m_sectionTitleFont;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_sectionTitleColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush m_sectionTitleBrush;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsRemappingOccured;
    
    UFUNCTION()
    void OnRemappingStarted(FName _ActionName, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION()
    void OnRemappingFieldFocusLost(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    
    UFUNCTION()
    void OnRemappingFieldFocused(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    
    UFUNCTION()
    void OnGamepadControllerTypeChanged(FName _gamepadControllerType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateRemappingKeyList();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateMappingListKeyIcons();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreDefaultMapping();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveMapping(FName _ActionName);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PerformKeyRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsWaitingInputForRemapping();
    
    UFUNCTION(BlueprintCallable)
    FText BPF_GetRemappingFailMessage(ERemappingFinishedStates _finishState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillRemappingKeyList(UPanelWidget* _KeyContainer, ERemappingAllowedInputTypes _eRemappingAllowedInputTypes, UButtonUserWidget* _LastRemappingFieldNextButton);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_BuildRemappingListOuterNavigation(UButtonUserWidget* _LastRemappingFieldNextButton);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BuildRemappingFieldsListExplicitNavigation(UButtonUserWidget* _LastRemappingFieldNextButton);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyMapping(ERemappingAllowedInputTypes _eRemappingInputTypeToApply);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingSucceed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingFieldLostFocus(UInputMappingWidget* _focusedRemappingWidget, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingFieldFocused(UInputMappingWidget* _focusedRemappingWidget, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingFailed(ERemappingFinishedStates _eRemappingStates, FKey _keyPressed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyPressedForRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping, bool _bIsKeyboardRemapping);
    
    UInputsMappingMenu();
};

