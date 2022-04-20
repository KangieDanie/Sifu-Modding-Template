#pragma once
#include "CoreMinimal.h"
#include "EInputMappingProfile.generated.h"

UENUM()
enum class EInputMappingProfile {
    DefaultGamepad,
    DefaultKeyboard,
    CustomGamepad,
    CustomKeyboard,
};

