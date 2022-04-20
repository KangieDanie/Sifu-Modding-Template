#pragma once
#include "CoreMinimal.h"
#include "EPendingGenerationTaskToLaunch.generated.h"

UENUM()
enum class EPendingGenerationTaskToLaunch {
    None,
    CreateCandidates,
    GenerationTaskAroundEnemyIfNeeded,
};

