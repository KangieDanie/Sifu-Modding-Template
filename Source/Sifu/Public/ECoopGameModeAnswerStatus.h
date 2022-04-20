#pragma once
#include "CoreMinimal.h"
#include "ECoopGameModeAnswerStatus.generated.h"

UENUM()
enum class ECoopGameModeAnswerStatus : uint8 {
    None,
    YesOnTheWay,
    Yes,
    No,
    Leader,
    Count,
};

