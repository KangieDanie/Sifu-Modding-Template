#pragma once
#include "CoreMinimal.h"
#include "ReplayMenuWidget.h"
#include "ReplayTimelineControl.h"
#include "ReplayAvailabilityLayerCache.h"
#include "ECycleDirection.h"
#include "EReplayTimelineControlType.h"
#include "ReplayKeyData.h"
#include "EReplayCameraMode.h"
#include "ReplayMainUserWidget.generated.h"

class UReplayTimelineWidget;
class AActor;
class UReplayKey;
class AReplayController;

UCLASS(EditInlineNew, Config=Replay)
class SIFU_API UReplayMainUserWidget : public UReplayMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FReplayTimelineControl m_TimelineControl;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bUIInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bAutoSelectKeyOnAdd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bSelectKeyOnGoToTimeCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bOnSelectFailDefaultToSelectedKey;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UReplayTimelineWidget* m_TimelineWidget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FReplayAvailabilityLayerCache m_AvailabilityLayers;
    
    UFUNCTION()
    bool OnTimelineModePressed();
    
    UFUNCTION()
    void OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION()
    void OnKeyAdded(UReplayKey* _key, bool _bCanSelectKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleTimelineMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleEditCameraMode(bool _bApplyCameraPositionToSelectedKeyOnLeave, bool _bApplyLensSettingsToSelectedKeyOnLeave);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSelectedKeyLookAtTarget(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSelectedKeyFollowTarget(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInPreviewMode(bool _bInPreview);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectPreviousKey();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectNextKey();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectKeyAndGoToTime(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectKey(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTimelineControlAndScrub();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveSelectedKeyCut();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveSelectedKey();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PasteKey();
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifySelectedKeyTimeDilationUpdate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifySelectedKeyCameraModeUpdated();
    
    UFUNCTION(BlueprintCallable)
    void BPF_MoveTimelineCursor(ECycleDirection _eDirection, EReplayTimelineControlType _eControlType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeavePasteKeyMode();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInKeyPastingMode() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsEditingKeyCameraPosition() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_HasSelectedOrHoveredKey() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasKeySelected() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToTime(UReplayKey* _key);
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetSelectedKey() const;
    
    UFUNCTION(BlueprintPure)
    AReplayController* BPF_GetReplayController() const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetKeyFromCurrentDemoTime(ECycleDirection _eDirection) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetIsMovingTimelineCursor() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetIsInPreviewMode() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateKeyWidgets();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CopySelectedKey();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyCurrentCineCameraSettingsAndPositionToKey(UReplayKey* _key, bool _bApplyPosition, bool _bApplyLensSettings, bool _bApplyFocusSettings);
    
    UFUNCTION(BlueprintCallable)
    UReplayKey* BPF_AddKeyAtCurrentTime(int32 _iTypeFlags, bool& _bOutKeyAlreadyExists);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddCutAtCurrentTime();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUndoOrRedoPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnTimelineZoom(float _fActionValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnTimelineMoveForwardPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnTimelineMoveBackwardPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTimelineModeToggled();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnSpecialMenuPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnSelectRightKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnSelectLeftKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSelectedKeyDataUpdate(UReplayKey* _key, const FReplayKeyData& _previousData);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnSelectCurrentKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnScrubReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnResumePressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnRemoveKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnRemoveCutPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPreviewModeChanged(bool _bInPreview);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnPasteKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMoveKeyRightPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMoveKeyReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMoveKeyLeftPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeySelectionUpdate(UReplayKey* _key, bool _bSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeySelected(UReplayKey* _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyAdded(UReplayKey* _key);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnGoToTimeInitiated(bool _bUnselectKey);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnGoToTimeCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnEditReplayPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnEditCameraPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEditCameraModeUpdate(bool _bIsEditingCameraPosition);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnCopyKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCameraModeChanged(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnApplySettingsPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnAddSpeedKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnAddKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnAddCutPressed();
    
public:
    UReplayMainUserWidget();
};

