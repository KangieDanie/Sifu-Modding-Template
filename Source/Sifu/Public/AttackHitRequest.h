#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
#include "AttackHitRequest.generated.h"

USTRUCT(BlueprintType)
struct FAttackHitRequest : public FHitRequest {
    GENERATED_BODY()
public:
    SIFU_API FAttackHitRequest();
};

