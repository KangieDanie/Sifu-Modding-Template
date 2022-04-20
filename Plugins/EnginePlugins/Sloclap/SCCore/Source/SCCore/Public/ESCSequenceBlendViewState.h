#pragma once
#include "CoreMinimal.h"
#include "ESCSequenceBlendViewState.generated.h"

UENUM()
enum class ESCSequenceBlendViewState : uint8 {
    ToSequence,
    Sequence,
    ToPlayer,
    None,
};

