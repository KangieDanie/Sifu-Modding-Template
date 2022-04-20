#pragma once
#include "CoreMinimal.h"
#include "ERelationshipTypes.generated.h"

UENUM()
enum class ERelationshipTypes : uint8 {
    Enemy,
    Fight,
    Object,
    Neutral,
    Coop,
    Ally,
    Count,
    None,
};

