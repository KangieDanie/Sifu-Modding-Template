#pragma once
#include "CoreMinimal.h"
#include "FallOnSlopeSetup.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFallOnSlopeSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> m_IgnoredActors;
    
    SIFU_API FFallOnSlopeSetup();
};

