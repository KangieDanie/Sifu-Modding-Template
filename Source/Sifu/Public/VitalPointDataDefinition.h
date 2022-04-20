#pragma once
#include "CoreMinimal.h"
#include "VitalPointDataDefinition.generated.h"

class UVitalPointData;

USTRUCT(BlueprintType)
struct FVitalPointDataDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_BoneToAttachBillboard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOnWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVitalPointData* m_VitalPointData;
    
    SIFU_API FVitalPointDataDefinition();
};

