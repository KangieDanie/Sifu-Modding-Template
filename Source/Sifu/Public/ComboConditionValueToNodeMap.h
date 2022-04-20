#pragma once
#include "CoreMinimal.h"
#include "ComboConditionValueToNodeMap.generated.h"

USTRUCT(BlueprintType)
struct FComboConditionValueToNodeMap {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<uint8, uint8> m_Map;
    
    SIFU_API FComboConditionValueToNodeMap();
};

