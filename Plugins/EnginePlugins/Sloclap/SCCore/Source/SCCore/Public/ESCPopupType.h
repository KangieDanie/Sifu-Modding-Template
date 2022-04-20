#pragma once
#include "CoreMinimal.h"
#include "ESCPopupType.generated.h"

UENUM()
enum class ESCPopupType {
    None,
    Generic,
    InvalidSave,
    SigninChanged,
    ConnectionFailed,
    PairingChanged,
    NeedLicense,
    ProgressWillNotBeSaved,
    ControllerDisconnected,
    SaveValidButBackupUsed,
    Count,
};

