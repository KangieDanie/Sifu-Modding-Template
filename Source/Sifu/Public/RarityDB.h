#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "RarityData.h"
#include "EGearRarity.h"
#include "RarityDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API URarityDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRarityData m_RaritiesData[5];
    
    UPROPERTY(EditAnywhere)
    FRarityData m_DirtRarityData;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetRarityData(EGearRarity _rarity, FRarityData& _outRarityData);
    
    URarityDB();
};

