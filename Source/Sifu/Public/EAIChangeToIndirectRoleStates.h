#pragma once
#include "CoreMinimal.h"
#include "EAIChangeToIndirectRoleStates.generated.h"

UENUM()
enum class EAIChangeToIndirectRoleStates : int32 {
    Down,
    Dizzy,
    Pushed,
    StructureBroken,
    Parried,
    Grabbed,
    Count,
    None,
};

