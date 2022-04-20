#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore GameFlow
#include "GameFlow.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
#include "EMenuEnum.h"
#include "WGGameFlow.generated.h"

class ULevelStreaming;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWGGameFlowOnNextMapPreloadOver);

UCLASS()
class SIFU_API UWGGameFlow : public UGameFlow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWGGameFlowOnNextMapPreloadOver OnNextMapPreloadOver;
    
protected:
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> m_pendingLoadingLevels;
    
public:
    UFUNCTION()
    void TravelToPendingMapInternal(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask);
    
protected:
    UFUNCTION()
    void OnControllerReconnectConfirm();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestartCurrentMap();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTags();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RaiseTag(FGameplayTag _tagToRaise);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadNextMap(bool _bForceClassicTravel);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPendingTravel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToNextMap(bool _bSaveBefore);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask);
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetFirstPlayableMapTagName() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetCurrentMapTag() const;
    
    UWGGameFlow();
};

