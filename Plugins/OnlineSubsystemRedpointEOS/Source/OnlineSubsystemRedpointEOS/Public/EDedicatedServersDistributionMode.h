#pragma once
#include "CoreMinimal.h"
#include "EDedicatedServersDistributionMode.generated.h"

UENUM()
enum class EDedicatedServersDistributionMode {
    DevelopersOnly,
    DevelopersAndPlayers,
    PlayersOnly,
};

