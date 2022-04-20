#pragma once
#include "CoreMinimal.h"
#include "EAvoidableDefenseMatrix.generated.h"

UENUM()
enum class EAvoidableDefenseMatrix {
    None,
    Jump,
    Duck,
    SideLeft = 0x4,
    SideRight = 0x8,
};

