#pragma once
#include "CoreMinimal.h"
#include "EPartyJoinabilityConstraint.generated.h"

UENUM()
enum class EPartyJoinabilityConstraint {
    AllowPlayersInMultipleParties,
    IgnoreInvitesIfAlreadyInParty,
};

