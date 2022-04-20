#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ENullableCondition
#include "ENullableCondition.h"
#include "SkillFilter.generated.h"

USTRUCT(BlueprintType)
struct FSkillFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENullableCondition m_eAcquired;
    
    SIFU_API FSkillFilter();
};

