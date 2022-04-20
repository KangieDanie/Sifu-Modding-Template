#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWeaponOverrideInfo.h"
#include "ComboOverride.h"
#include "LocomotionPaceSelector.h"
#include "ESCAICombatRoles.h"
#include "EAIWuguanTicketEvaluation.h"
#include "WeaponOverrideInfo.generated.h"

class UAIContextualDefense;
class UAvoidAbility;
class UBaseMovementDB;

USTRUCT(BlueprintType)
struct FWeaponOverrideInfo : public FBaseWeaponOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAIContextualDefense* m_ContextualDefenseOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FComboOverride> m_ComboOverrides;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAvoidAbility> m_AvoidAbility;
    
    UPROPERTY(VisibleAnywhere)
    UBaseMovementDB* m_MovementDB;
    
    UPROPERTY(EditAnywhere)
    bool m_bActivateAttackTicketFactorsOverride;
    
    UPROPERTY(EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketEvaluationFactorsOverride;
    
    UPROPERTY(EditAnywhere)
    bool m_bActivateCirclePerCombatRoleOverride;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, int32> m_CirclePerCombatRolesOverride;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideLocomotionPaceSelector;
    
    UPROPERTY(EditAnywhere)
    FLocomotionPaceSelector m_OverridingLocomotionPaceSelector;
    
    SIFU_API FWeaponOverrideInfo();
};

