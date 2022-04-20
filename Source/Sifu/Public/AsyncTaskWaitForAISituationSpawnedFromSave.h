#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskWaitForAISituationSpawnedFromSave.generated.h"

class UAsyncTaskWaitForAISituationSpawnedFromSave;
class AAISituationActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitForAISituationSpawnedFromSaveAllSpawned);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitForAISituationSpawnedFromSaveNothingToSpawn);

UCLASS()
class SIFU_API UAsyncTaskWaitForAISituationSpawnedFromSave : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForAISituationSpawnedFromSaveAllSpawned AllSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForAISituationSpawnedFromSaveNothingToSpawn NothingToSpawn;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForAISituationSpawnedFromSave* BPF_WaitForAISituationToSpawnFromSave(const TArray<AAISituationActor*> _situationsToWaitFor);
    
    UAsyncTaskWaitForAISituationSpawnedFromSave();
};

