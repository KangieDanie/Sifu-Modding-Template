#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructAvoid.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAvoid : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiAvoidType;
    
    SIFU_API FNetOrderStructAvoid();
};

