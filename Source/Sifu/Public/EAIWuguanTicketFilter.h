#pragma once
#include "CoreMinimal.h"
#include "EAIWuguanTicketFilter.generated.h"

UENUM()
enum class EAIWuguanTicketFilter {
    HasAttackTicket,
    HasDefinedCircle,
    IsTicketOwned,
    IsValidPosition,
    AngleBetThreatAndPosition,
    UnableToInteractWithWeapon,
    WeaponIsUsed,
    HasAnObjectInHands,
    HasAnyRegisteredAction,
    IsDirectOponentWithTicket,
    IsTooFarFromWeapon,
    LineOfSight,
    PlayerInBetween,
    AIShouldUpdateCombatPosition,
    IsPositionInAnyPositionCircle,
    PositionPOICooldown,
    PositionPOICombatRoles,
    PositionPOISpawners,
    PositionPOIEnemyDist,
    PositionPOI_AIBehavior,
    AssignedToSanctuaryAsTicket,
    AssignedToSanctuaryAsCandidate,
    Count,
    None,
};

