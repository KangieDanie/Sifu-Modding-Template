#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SaveManagerBlueprintHelper
#include "SaveManagerBlueprintHelper.h"
#include "DuplicatedSaveData.h"
#include "WGSaveManagerBlueprintHelper.generated.h"

UCLASS()
class SIFU_API UWGSaveManagerBlueprintHelper : public USaveManagerBlueprintHelper {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SnapshotPartOfSave(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedSaveGame(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetSnapshotWithMask(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetPartOfSave(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OverrideSaveWithSnapshot(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_HasSnapshotOfMask(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetSnapshotSavedData(int32 _iSaveTypeBitmask, FDuplicatedSaveData& _snapshotSavedData);
    
    UWGSaveManagerBlueprintHelper();
};

