#pragma once
#include "CoreMinimal.h"
#include "GameSaveData.h"
//CROSS-MODULE INCLUDE: SCCore SCSaveObjectGameData
#include "SCSaveObjectGameData.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
#include "DuplicatedSaveData.h"
#include "WGSaveObjectGameData.generated.h"

UCLASS()
class SIFU_API UWGSaveObjectGameData : public USCSaveObjectGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameSaveData m_SavedData;
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_HasGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddOrUpdateMaskSnapshot(int32 _iMask, const FDuplicatedSaveData& _duplicatedData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_SnapshotSaveMask(int32 _iSaveMaskToBackup);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool BPE_ShouldLoadAntiCheatMap() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_OverrideSaveMaskWithSnapshot(int32 _iSnapshotIdx);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 BPE_GenerateGlobalAllowedSaveMask() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_CopyToSaveWithMask(USCSaveObjectGameData* _inSaveTo, int32 _iTestMask);
    
    UWGSaveObjectGameData();
};

