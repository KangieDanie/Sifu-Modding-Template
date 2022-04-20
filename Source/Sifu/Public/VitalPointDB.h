#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore InheritedDataAsset
#include "InheritedDataAsset.h"
#include "VitalPointDataDefinition.h"
#include "VitalPointDB.generated.h"

class UVitalPointDB;

UCLASS(BlueprintType)
class UVitalPointDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVitalPointDB* m_BaseVitalPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVitalPointDataDefinition> m_VitalPointDefinitionArray;
    
    UVitalPointDB();
};

