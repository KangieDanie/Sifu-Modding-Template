#pragma once
#include "CoreMinimal.h"
#include "EEndGameResult.generated.h"

UENUM()
enum class EEndGameResult {
    Victory,
    Defeat,
    Draw,
    None,
};

