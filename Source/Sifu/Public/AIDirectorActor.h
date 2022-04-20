#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EGlobalBehaviors.h"
#include "EOrderState.h"
#include "EMcDominationGaugeSteps.h"
#include "EAlertLevel.h"
#include "ESCAICombatRoles.h"
#include "EAlertLevelThreshold.h"
#include "EAlertedReason.h"
#include "EOrderType.h"
#include "EFightingState.h"
#include "DamageInfos.h"
#include "ESCAICombatRolesChangeReason.h"
#include "AIDirectorActor.generated.h"

class AFightingCharacter;
class ABaseCharacter;
class AAISituationActor;
class UAIFightingComponent;
class USCAiAction;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAIDirectorActorDelegate, EAlertLevel, EAlertLevel);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIDirectorActorOnGlobalBehaviorsChanged, EGlobalBehaviors, EGlobalBehaviors);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIDirectorActorOnDifficultyLevelChanged);

UCLASS()
class SIFU_API AAIDirectorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAIDirectorActorOnGlobalBehaviorsChanged OnGlobalBehaviorsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAIDirectorActorOnDifficultyLevelChanged OnDifficultyLevelChanged;
    
    UFUNCTION(BlueprintCallable)
    static void BPF_UnbindFromAlertLevelChanged(FAIDirectorActorDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RemoveGlobalAlertLevelThreshold(FName _name);
    
    UFUNCTION(BlueprintPure)
    static EAlertLevel BPF_GlobalAlertLevel();
    
    UFUNCTION(BlueprintPure)
    EAlertLevel BPF_GetAlertLevel() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetAIsForEnemy(const AActor* _enemyActor, ESCAICombatRoles _eCombatRole, TArray<AActor*>& _AICharactersOutArray) const;
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BindToAlertLevelChanged(FAIDirectorActorDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AddGlobalAlertLevelThreshold(EAlertLevel _eLevel, EAlertLevelThreshold _eType, FName _name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSituationDeactivated(const AAISituationActor* _SituationActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSituationActivated(const AAISituationActor* _SituationActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSafeSanctuaryBarkTrigger(const AFightingCharacter* _Enemy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMCDominationChanged(EMcDominationGaugeSteps _NewStep);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnLastManPhaseStarted(const UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGlobalBehaviorChanged(const UAIFightingComponent* _aiComponent, EGlobalBehaviors _NewBehavior, EAlertedReason _AlertedReason, bool _SkipBark);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEnemyRevival(ABaseCharacter* _Enemy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEnemyPickedWeapon(const AFightingCharacter* _Enemy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEnemyOrderStateChanged(const AFightingCharacter* _Enemy, EOrderType _OrderType, EOrderState _OrderState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEnemyFightingStateChanged(EFightingState _eFightingState, bool _bPushed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEnemyDeathDetected(const AFightingCharacter* _Enemy, const FDamageInfos& _damageInfos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCombatRolesChanged(ESCAICombatRolesChangeReason _eReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIDeathDetected(const AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIActionExecute(const UAIFightingComponent* _aiComponent, const USCAiAction* _AIAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_CanAICharacterSpeak(const AFightingCharacter* Character);
    
    AAIDirectorActor();
};

