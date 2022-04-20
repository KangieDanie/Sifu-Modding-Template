#pragma once
#include "CoreMinimal.h"
#include "DisplayLevel.generated.h"

UENUM()
enum class DisplayLevel : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Log,
    Verbose,
    VeryVerbose,
    All = 0x6,
    NumVerbosity,
    VerbosityMask = 0xF,
    SetColor = 0x40,
    BreakOnLog = 0x80,
};

