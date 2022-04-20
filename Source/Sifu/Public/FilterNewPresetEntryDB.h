#pragma once
#include "CoreMinimal.h"
#include "FilterPresetData.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "FilterNewPresetEntryDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFilterNewPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFilterPresetData m_Data;
    
    UFilterNewPresetEntryDB();
};

