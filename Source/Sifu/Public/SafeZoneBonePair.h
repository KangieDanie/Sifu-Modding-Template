#pragma once
#include "CoreMinimal.h"
#include "SafeZoneBonePair.generated.h"

USTRUCT(BlueprintType)
struct FSafeZoneBonePair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_bone1;
    
    UPROPERTY(EditAnywhere)
    FName m_bone2;
    
    SIFU_API FSafeZoneBonePair();
};

