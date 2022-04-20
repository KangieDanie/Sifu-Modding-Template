#pragma once
#include "CoreMinimal.h"
#include "ESanctuaryCharacterStatus.generated.h"

UENUM()
enum class ESanctuaryCharacterStatus {
    None,
    FrozenBySanctuary,
    AssignedToSanctuary,
};

