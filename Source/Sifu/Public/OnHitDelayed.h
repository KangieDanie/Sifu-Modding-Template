#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "OnHitDelayed.generated.h"

USTRUCT()
struct FOnHitDelayed {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FHitDescription m_Hit;
    
    SIFU_API FOnHitDelayed();
};

