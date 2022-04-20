#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE: CoreUObject Timespan
#include "SaveManagerBlueprintHelper.generated.h"

class USCSaveObjectPlayerProfile;
class USaveManagerDelegateHandler;
class USCSaveObjectGameData;

UCLASS(BlueprintType)
class SCCORE_API USaveManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FString BPF_SwapSaveNameToAndFromBackup(const FString& _currentSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetSaveSystemEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedLoadFirstSave();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedLoad(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedCreateSaveGame(int32 _iSaveIndex);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsUsingDebugSaveLevelInPIE();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsUsingDebugGameFlowInPie();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsSaveSystemEnabled();
    
    UFUNCTION(BlueprintPure)
    static FTimespan BPF_GetTimePlayedInCurrentSave();
    
    UFUNCTION(BlueprintPure)
    static USaveManagerDelegateHandler* BPF_GetSaveManagerDelegateHandler();
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetSaveBackupSuffix();
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetPlayerSavesCount(bool _bValidOnly);
    
    UFUNCTION(BlueprintPure)
    static USCSaveObjectPlayerProfile* BPF_GetCurrentSaveProfile();
    
    UFUNCTION(BlueprintPure)
    static USCSaveObjectGameData* BPF_GetCurrentSaveGame();
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GenerateSaveNameFromIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GenerateIndexFromSaveName(const FString& _saveName);
    
    USaveManagerBlueprintHelper();
};

