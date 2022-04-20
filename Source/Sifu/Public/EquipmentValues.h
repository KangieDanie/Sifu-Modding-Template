#pragma once
#include "CoreMinimal.h"
#include "EquipmentValues.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FEquipmentValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iFragmentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iDirtValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iDyeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iRepairCost;
    
    FEquipmentValues();
};

