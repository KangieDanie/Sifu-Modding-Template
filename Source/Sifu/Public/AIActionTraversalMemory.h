#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAIActionMemoryEntry
#include "SCAIActionMemoryEntry.h"
#include "AIActionTraversalMemory.generated.h"

USTRUCT()
struct FAIActionTraversalMemory : public FSCAIActionMemoryEntry {
    GENERATED_BODY()
public:
    SIFU_API FAIActionTraversalMemory();
};

