#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ETintEnum.h"
#include "TintData.h"
#include "TintDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UTintDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ETintEnum, FTintData> m_TintsData;
    
    UTintDB();
};

