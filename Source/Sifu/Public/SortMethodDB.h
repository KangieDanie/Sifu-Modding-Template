#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SortMethodData.h"
#include "EInventorySearchOrder.h"
#include "SortMethodDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API USortMethodDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSortMethodData m_SortMethodData[10];
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetSortMethodData(EInventorySearchOrder _sortMethod, FSortMethodData& _outSortMethodData);
    
    USortMethodDB();
};

