#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "TraversalInfo.h"
#include "NetOrderStructTraversalCine.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructTraversalCine : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTraversalInfo m_TraversalInfo;
    
    SIFU_API FNetOrderStructTraversalCine();
};

