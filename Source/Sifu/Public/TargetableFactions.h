#pragma once
#include "CoreMinimal.h"
#include "TargetableFactions.generated.h"

USTRUCT(BlueprintType)
struct FTargetableFactions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_TargetableFactions[6];
    
    SIFU_API FTargetableFactions();
};

