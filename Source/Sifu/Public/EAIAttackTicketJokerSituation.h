#pragma once
#include "CoreMinimal.h"
#include "EAIAttackTicketJokerSituation.generated.h"

UENUM()
enum class EAIAttackTicketJokerSituation : uint8 {
    TargetTraversal,
    TargetTakedown,
    TargetDodge,
    TargetHitted,
    CandidateAttacking,
    TargetThrowsObject,
    TargetPerformsFocusAttack,
    TargetPerformsLastManTakedown,
    TargetPerformsKnockdownAttack,
    TargetRushing,
    TargetRevive,
    TargetKnockedDown,
    TargetGettingUp,
    TargetPushedBack,
    TargetDizzy,
    MCDominationGoesPositive,
    MCDominationGoesNegative,
    Count,
    None,
};

