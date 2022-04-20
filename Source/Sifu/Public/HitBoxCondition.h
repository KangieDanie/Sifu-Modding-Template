#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HitBoxCondition.generated.h"

UCLASS(Abstract)
class SIFU_API UHitBoxCondition : public UObject {
    GENERATED_BODY()
public:
    UHitBoxCondition();
};

