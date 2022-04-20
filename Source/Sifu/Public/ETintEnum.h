#pragma once
#include "CoreMinimal.h"
#include "ETintEnum.generated.h"

UENUM()
enum class ETintEnum : uint8 {
    Base,
    Brighter,
    Darker,
    Warmer,
    Colder,
    ColorSwitch,
    Count,
    None,
};

