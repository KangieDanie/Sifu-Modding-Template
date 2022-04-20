#pragma once
#include "CoreMinimal.h"
#include "EAIGameplayStates.generated.h"

UENUM()
enum class EAIGameplayStates : uint8 {
    None,
    Idle,
    Block,
    Dodge,
    Parry,
    Down,
    Dizzy,
    Pushed,
    Attacking,
    StructureBroken,
    Parried,
    Grabbed,
    Blocked,
    Traversal,
};

