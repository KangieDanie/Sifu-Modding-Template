#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "SCAITicketEnum.h"
#include "AIConditionClassInstance.h"
#include "SCUserDefinedEnumHandler.h"
#include "EAIAttackTicketJokerSituation.h"
#include "AIHelpersSifu.generated.h"

class AAISpawner;
class APawn;
class UAIFightingComponent;
class AFightingCharacter;
class UObject;
class AActor;

UCLASS(BlueprintType)
class SIFU_API UAIHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FSCAITicketEnum Conv_SCEnumToAITicketEnum(const FSCUserDefinedEnumHandler& _scEnum);
    
    UFUNCTION(BlueprintPure)
    static UAIFightingComponent* Conv_PawnToAiComponent(APawn* _pawn);
    
    UFUNCTION(BlueprintPure)
    static UAIFightingComponent* Conv_AISpawnerToAiComponent(AAISpawner* _spawner);
    
    UFUNCTION(BlueprintPure)
    static AFightingCharacter* Conv_AiComponentToFightingCharacter(UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestConditionInstances(const TArray<FAIConditionClassInstance>& _conditions, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestConditionInstance(const FAIConditionClassInstance& _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetTicketsCooldown(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester, float _fTimer);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetAttackJokerSituationsEnabled(const TArray<EAIAttackTicketJokerSituation>& _situationsToSet, UAIFightingComponent* _requester, bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetAllAttackJokerSituationsEnabled(UAIFightingComponent* _requester, bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetTicketsCooldown(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetAllTicketsCooldown(UAIFightingComponent* _requester);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_RequestPassiveAttackTicket(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReleaseOwnedAttackTicket(UAIFightingComponent* _resquester);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ReleaseAttackTicket(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_ProjectPointToNavigation(const UObject* _worldCtxt, const FVector& _vPoint, FVector& _vOutProjected, const FVector& _vExtent);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsPassiveAttackTicketAvailable(const FSCAITicketEnum& _ticketEnum, UAIFightingComponent* _resquester);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsCharacterFrozenBySanctuary(const AFightingCharacter* _AICharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsCharacterAssignedToSanctuary(const AFightingCharacter* _AICharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAttackerRegisteredInCombatForTarget(const AActor* _attackerToTest, const AActor* _targetActor);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAnySanctuaryActive();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_HasAttackTicket(UAIFightingComponent* _resquester, const FSCAITicketEnum& _ticket);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetTicketCooldownRemaining(const UAIFightingComponent* _requester, const FSCAITicketEnum& _ticketEnum, float& _fOutMin, float& _fOutMax, int32& _iOutTicketsCount);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetOwnedAttackTickets(UAIFightingComponent* _resquester, TArray<FSCAITicketEnum>& _outOwnedTickets);
    
    UFUNCTION(BlueprintCallable)
    static int BPF_GetCurrentNumberOfAIAttackers(const AActor* _targetActor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ForceAssignAICharacterToSanctuary(const UAIFightingComponent* _aiFightingComponent);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AddDomination(float _fDominationBonus);
    
    //UAIHelpers() {};
};

