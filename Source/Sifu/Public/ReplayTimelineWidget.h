#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "Blueprint/UserWidget.h"
#include "Layout/Margin.h"
#include "EReplayKeyIndexUpdateReason.h"
#include "ReplayKeyData.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: UMG PaintContext
#include "EReplayTimelineDebugType.h"
#include "ReplayTimelineWidget.generated.h"

class UCanvasPanel;
class UReplayKeyWidget;
class UReplayKey;
class AReplayController;

UCLASS(EditInlineNew)
class SIFU_API UReplayTimelineWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float m_fZoom;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreviewCursorAlphaTriggerUnzoom;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* m_KeysPanel;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin m_TimelinePadding;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayKeyWidget> m_KeyWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TMap<UReplayKey*, UReplayKeyWidget*> m_KeyWidgetsMap;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UReplayKeyWidget*> m_KeyWidgets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AReplayController* m_ReplayController;
    
    UFUNCTION()
    void OnKeyDataUpdated(UReplayKey* _key, const FReplayKeyData& _previousData);
    
    UFUNCTION()
    void OnKeyDataIndexUpdate(UReplayKey* _key, int32 _iPreviousIndex, EReplayKeyIndexUpdateReason _eReason);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetZoom(float _fZoom);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_KeyPropertyChanged(UReplayKey* _key);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(AReplayController* _controller);
    
    UFUNCTION(BlueprintPure)
    UReplayKeyWidget* BPF_GetWidget(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetTimelinePosition(float _fDilatedDemoTime) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetKeyPositionOffsetOverrides(const UReplayKeyWidget* _keyWidget, float& _fOutTimeOffset, float& _fTimelinePositionOffset) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetKeyPosition(const UReplayKeyWidget* _keyWidget, bool _bOffsetKeySize, bool _bAddContainerPadding, bool& _bOutIsOutOfBounds, bool _bPreventKeyTypePositionOverride) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentTimelinePosition() const;
    
    UFUNCTION(BlueprintCallable)
    UReplayKeyWidget* BPF_AddKey(UReplayKey* _key);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_RequestKeysDisplayUpdate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUpdateKeySelectedDisplay(UReplayKey* _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPaintTransition(FVector2D _vStartPosition, FVector2D _vEndPosition, bool _bHighlight, bool _bSelected, UPARAM(Ref) FPaintContext& _context) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPaintCursorPreview(FVector2D _vStartPosition, FVector2D _vEndPosition, UPARAM(Ref) FPaintContext& _context) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeySelectionUpdate(UReplayKey* _key, bool _bSelected);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnKeyPostDelete(UReplayKey* _key);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnKeyDilatedTimeRecalc(int32 _iStartingIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyAdded(UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDebugPaintCursor(FVector2D _vStartPosition, FVector2D _vEndPosition, EReplayTimelineDebugType _eDebugType, UPARAM(Ref) FPaintContext& _context) const;
    
public:
    UReplayTimelineWidget();
};

