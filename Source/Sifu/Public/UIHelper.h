#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EUIInputModes.h"
#include "ECycleDirection.h"
//CROSS-MODULE INCLUDE: CoreUObject EMouseCursor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "UIHelper.generated.h"

class UWidget;
class UTextBlock;
class UUserWidget;
class ULocalPlayer;
class UPanelWidget;
class UButtonUserWidget;
class UWidgetAnimation;

UCLASS(BlueprintType)
class SIFU_API UUIHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void UpdateXPProgressBar(int32 _iCurrentLevelXP, int32 _iNextLevelXP, int32 _iStartXP, int32 _iIncrementXP, float _fProgress, float _fDuration, float _fDelta, float& _fNewProgress, float& _fLevelProgress, int32& _iCurrentXP);
    
    UFUNCTION(BlueprintCallable)
    static void LerpXPProgressBar(int32 _iCurrentLevelXP, int32 _iNextLevelXP, int32 _iStartXP, int32 _iIncrementXP, float _fProgress, float _fProgressDelta, float& _fLevelProgress, int32& _iCurrentXP, bool& _bLevelUp, int32 _iLoopXP);
    
    UFUNCTION(BlueprintCallable)
    static void FocusWidget(UWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    static void FocusFirstFocusableWidget(TArray<UWidget*> _widgets);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_StopAllAnimations(UUserWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetVirtualCursorWidget(ULocalPlayer* _player, TEnumAsByte<EMouseCursor::Type> Cursor, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetLastFocusedButton(UWidget* _lastFocusedButton);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCursorPosition(const FVector2D& _vCursor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetAutoWrapTextBlock(UTextBlock* _textBlock, bool _bAutoWrap);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RefreshButtonFocus();
    
    UFUNCTION(BlueprintCallable)
    static UWidget* BPF_GetNextWidgetInArray(const TArray<UWidget*>& _widgets, UWidget* _currentWidget, ECycleDirection _eDirection, bool _bSkipDisabled);
    
    UFUNCTION(BlueprintCallable)
    static uint8 BPF_GetNextIndex(uint8 _uiCurrentIndex, ECycleDirection _eDirection, uint8 _uiLimitValue, bool _bLoopAtLimit, bool _bIncludeLimit);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* BPF_GetNextChildWidget(UPanelWidget* container, UWidget* currentWidget, ECycleDirection _eDirection, bool _bSkipDisabled);
    
    UFUNCTION(BlueprintPure)
    static EUIInputModes BPF_GetLastNavigationMode();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetIsPIE();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetIsEditor();
    
    UFUNCTION(BlueprintPure)
    static UWidget* BPF_GetFocusedButton();
    
    UFUNCTION(BlueprintPure)
    static FVector2D BPF_GetCursorPosition();
    
    UFUNCTION(BlueprintPure)
    static UButtonUserWidget* BPF_FindSelectedChildButton(UPanelWidget* _panel);
    
    UFUNCTION(BlueprintPure)
    static UButtonUserWidget* BPF_FindSelectedButtonInArray(const TArray<UWidget*>& _widgets);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EndAnimation(UUserWidget* _widget, UWidgetAnimation* _animation);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EndAllAnimations(UUserWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DeselectAllChildButtons(UPanelWidget* _panel);
    
    UFUNCTION(BlueprintPure)
    static UWidget* BPF_CycleChildren(UPanelWidget* _panel, UWidget* _currentChild, ECycleDirection _eDirection, bool _bSkipDisabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ClearUserFocus();
    
    UUIHelper();
};

