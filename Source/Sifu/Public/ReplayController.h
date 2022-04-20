#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseReplayController.h"
#include "ReplayTimelineControllerData.h"
#include "EReplayCameraMode.h"
#include "EReplayKeyTransition.h"
#include "ReplayController.generated.h"

class UReplayMainUserWidget;
class AActor;
class UReplayTimelineController;
class UCurveFloat;
class AReplayVideoRecorder;
class UReplayKey;
class UReplayTimelineModel;
class UReplaySystem;
class UReplayFightingCharacterComponent;
class UObject;
class AReplayingCamera;
class UReplayCineCameraComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayController_OnCameraModeChanged, EReplayCameraMode, _eCameraMode);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayController_OnGoToTimeInitiated, bool, _bUnselectKey);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FReplayControllerOnVideoRecorderCreated, AReplayVideoRecorder*, _videoRecorder);

UCLASS()
class SIFU_API AReplayController : public ABaseReplayController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FReplayTimelineControllerData m_TimelineControllerData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayTimelineController* m_TimelineController;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fGoToTimeCompletedTimeS;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTimeDilationZeroedOnGoToTime;
    
    UPROPERTY(BlueprintAssignable)
    FReplayController_OnCameraModeChanged m_OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FReplayController_OnGoToTimeInitiated m_OnGoToTimeInitiated;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EReplayKeyTransition, UCurveFloat*> m_TransitionProfiles;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayCameraMode m_eCurrentCameraMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_VirtualCameraClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UReplayMainUserWidget* m_MainUserWidget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* m_VirtualCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AReplayVideoRecorder> m_VideoRecorderClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AReplayVideoRecorder* m_VideoRecorder;
    
    UFUNCTION()
    void OnKeyMoved(UReplayKey* _key);
    
    UFUNCTION()
    void OnGoToTimeCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsReplaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsRecording();
    
    UFUNCTION(BlueprintCallable)
    void GotoTimeInSeconds(float _fTime, bool _bUnselectKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_StopVideoRecording();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartVideoRecording(FReplayControllerOnVideoRecorderCreated _onVideoRecorderCreated);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StartSkipTimeToNextKeyFrameTask();
    
protected:
    UFUNCTION(BlueprintCallable)
    UReplayMainUserWidget* BPF_SpawnMainUserWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetDemoPlayTimeDilation(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCameraMode(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_ResetPreviousTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveReplay();
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsRecordingVideo() const;
    
public:
    UFUNCTION(BlueprintPure)
    UCurveFloat* BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType) const;
    
    UFUNCTION(BlueprintPure)
    UReplayTimelineModel* BPF_GetTimelineModel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetMS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    UReplaySystem* BPF_GetReplaySystem();
    
public:
    UFUNCTION(BlueprintPure)
    UReplayFightingCharacterComponent* BPF_GetReplayFightingCharacterComponent(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    AReplayingCamera* BPF_GetReplayFightingCharacterCameraDummy(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCurrentCineCameraComponent() const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCineCameraComponent(EReplayCameraMode _eCameraMode) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayingBeginPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
public:
    AReplayController();
};

