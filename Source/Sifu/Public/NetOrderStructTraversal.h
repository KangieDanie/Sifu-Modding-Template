#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "TraversalInfo.h"
#include "HitBox.h"
#include "NetOrderStructTraversal.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructTraversal : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_FallHit;
    
    SIFU_API FNetOrderStructTraversal();
};

