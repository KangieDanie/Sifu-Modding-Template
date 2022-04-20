#pragma once
#include "CoreMinimal.h"
#include "ELinkWithExternalBehavior.generated.h"

UENUM()
enum class ELinkWithExternalBehavior : uint8 {
    ActiveIfExternalActive,
    ActiveIfExternalInactive,
};

