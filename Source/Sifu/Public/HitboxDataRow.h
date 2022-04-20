#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHittedReaction.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "Engine/DataTable.h"
#include "EAttackPowers.h"
#include "EHitType.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "HitImpact.h"
#include "DeflectImpact.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "AttackPropertyLevel.h"
#include "EFightingState.h"
#include "EKnockbackBehavior.h"
#include "HitboxDataRow.generated.h"

class UCurveFloat;
class UHitActionLauncher;

USTRUCT(BlueprintType)
struct SIFU_API FHitboxDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iHitboxGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxImpactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreImpactAngleWhenPenetrating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_uiTargetFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_HitboxGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOnlyHitCharacterWithRequiredHitboxGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_AdditionalHitboxGameplayTagsOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_RequiredGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHitTargetOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHitAnyCharacterOnAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCanTouchMultipleTargetAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCanBeLethal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCanBreakStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitImpact m_OnHitImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_KnockBackDynamicOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitImpact m_OnGuardImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_KnockBackDynamicOnGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDeflectImpact m_OnDeflectImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHittedReaction m_eHittedReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UHitActionLauncher> m_hitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bNotifyHittedOnHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bApplyFreezeFramesOnHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bPlayRumbleOnHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bPlayRumbleOnNormalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHitType m_eHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_HitContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackPowers m_eAttackPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideResilience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iOverrideResilienceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDizzyOnAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDizzyOnParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bParriable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bPlayAvoidedOrder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttackPropertyLevel m_AttackPropertyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EFightingState, FAttackPropertyLevel> m_AttackPropertyLevelOverrides;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinKnockbackAngleFromHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKnockbackBehavior m_eKnockBackBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fKnockbackEastWestAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iHitboxDefenseMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iAvoidableDefenseMatrix;
    
    FHitboxDataRow();
};

