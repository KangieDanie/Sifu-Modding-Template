#pragma once
#include "CoreMinimal.h"
#include "ESCMessageLogSeverity.generated.h"

UENUM()
enum class ESCMessageLogSeverity : uint8 {
    Info,
    Warning,
    Error,
    CriticalError,
};

