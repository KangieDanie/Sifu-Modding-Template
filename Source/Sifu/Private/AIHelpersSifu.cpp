#include "AIHelpersSifu.h"

class AFightingCharacter;
class APawn;
class UAIFightingComponent;
class AAISpawner;
class UObject;
class AActor;

FSCAITicketEnum UAIHelpers::Conv_SCEnumToAITicketEnum(const FSCUserDefinedEnumHandler& _scEnum) {
    return FSCAITicketEnum{};
}

UAIFightingComponent* UAIHelpers::Conv_PawnToAiComponent(APawn* _pawn) {
    return NULL;
}

UAIFightingComponent* UAIHelpers::Conv_AISpawnerToAiComponent(AAISpawner* _spawner) {
    return NULL;
}

AFightingCharacter* UAIHelpers::Conv_AiComponentToFightingCharacter(UAIFightingComponent* _aiComponent) {
    return NULL;
}

bool UAIHelpers::BPF_TestConditionInstances(const TArray<FAIConditionClassInstance>& _conditions, const AFightingCharacter* _owner) {
    return false;
}

bool UAIHelpers::BPF_TestConditionInstance(const FAIConditionClassInstance& _condition, const AFightingCharacter* _owner) {
    return false;
}

void UAIHelpers::BPF_SetTicketsCooldown(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester, float _fTimer) {
}

void UAIHelpers::BPF_SetAttackJokerSituationsEnabled(const TArray<EAIAttackTicketJokerSituation>& _situationsToSet, UAIFightingComponent* _requester, bool _bEnabled) {
}

void UAIHelpers::BPF_SetAllAttackJokerSituationsEnabled(UAIFightingComponent* _requester, bool _bEnabled) {
}

void UAIHelpers::BPF_ResetTicketsCooldown(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester) {
}

void UAIHelpers::BPF_ResetAllTicketsCooldown(UAIFightingComponent* _requester) {
}

bool UAIHelpers::BPF_RequestPassiveAttackTicket(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester) {
    return false;
}

void UAIHelpers::BPF_ReleaseOwnedAttackTicket(UAIFightingComponent* _resquester) {
}

void UAIHelpers::BPF_ReleaseAttackTicket(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester) {
}

bool UAIHelpers::BPF_ProjectPointToNavigation(const UObject* _worldCtxt, const FVector& _vPoint, FVector& _vOutProjected, const FVector& _vExtent) {
    return false;
}

bool UAIHelpers::BPF_IsPassiveAttackTicketAvailable(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester) {
    return false;
}

bool UAIHelpers::BPF_IsCharacterFrozenBySanctuary(const AFightingCharacter* _AICharacter) {
    return false;
}

bool UAIHelpers::BPF_IsCharacterAssignedToSanctuary(const AFightingCharacter* _AICharacter) {
    return false;
}

bool UAIHelpers::BPF_IsAttackerRegisteredInCombatForTarget(const AActor* _attackerToTest, const AActor* _targetActor) {
    return false;
}

bool UAIHelpers::BPF_IsAnySanctuaryActive() {
    return false;
}

bool UAIHelpers::BPF_HasAttackTicket(UAIFightingComponent* _resquester, const FSCAITicketEnum& _ticket) {
    return false;
}

void UAIHelpers::BPF_GetTicketCooldownRemaining(const UAIFightingComponent* _requester, const FSCAITicketEnum& _ticketEnum, float& _fOutMin, float& _fOutMax, int32& _iOutTicketsCount) {
}

void UAIHelpers::BPF_GetOwnedAttackTickets(UAIFightingComponent* _resquester, TArray<FSCAITicketEnum>& _outOwnedTickets) {
}

int32 UAIHelpers::BPF_GetCurrentNumberOfAIAttackers(const AActor* _targetActor) {
    return 0;
}

void UAIHelpers::BPF_ForceAssignAICharacterToSanctuary(const UAIFightingComponent* _aiFightingComponent) {
}

void UAIHelpers::BPF_AddDomination(float _fDominationBonus) {
}

//UAIHelpers::UAIHelpers() {
//}

