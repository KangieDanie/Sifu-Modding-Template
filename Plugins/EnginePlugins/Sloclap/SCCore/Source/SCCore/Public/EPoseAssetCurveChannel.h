#pragma once
#include "CoreMinimal.h"
#include "EPoseAssetCurveChannel.generated.h"

UENUM()
enum class EPoseAssetCurveChannel {
    LipSynch,
    AnimNotify,
    Default,
    Count,
};

