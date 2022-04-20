#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "EAIChangeToIndirectRoleStates.h"
#include "EAIGameplayStates.h"
#include "EditableOrderType.h"
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
#include "ESpeedState.h"
//CROSS-MODULE INCLUDE: Engine CollisionResponseContainer
#include "TimerAndOffset.h"
#include "AIAttackHitDetectionVolume.h"
#include "EAIPositioningOption.h"
#include "ESCAICombatRoles.h"
#include "NavAreaPerRange.h"
#include "EAIWuguanTicketEvaluation.h"
#include "EOrderType.h"
#include "EDefenseTactics.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
#include "GlobalAISettings.generated.h"

class UDodgeTypeUseCaseMatrix;
class UNavArea;
class UTraversalDB;
class UAIMasterArchetype;
class UCurveFloat;
class UNavigationQueryFilter;
class AAIDirectorActor;

UCLASS(DefaultConfig, Config=WuguanAI)
class SIFU_API UGlobalAISettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fDelayBeforeInvestigation;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fOnPlayerDeathDifficultyRatio;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMaxDistToTriggerSuspicious;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fInvestigationDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fSightMaxVerticalAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fFallSoundDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fEnemyUpdateDelay;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDelayBetween2SurprisedDialogSegemnt;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatRange m_fSurprisedPlayRateRange;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMaxGlobalDifficultyValue;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIGameplayStates, float> m_RecordedStateDelay;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UDodgeTypeUseCaseMatrix> m_DodgeTypeUseCaseMatrixClass;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fAttackPositionRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDirectOponentAttackPositionRadius;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableJiggleWithMove;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableJiggleWithAnimation;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fJiggleTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fJiggleMinDist;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEditableOrderType> m_NoPhaseTransitionOrders;
    
    UPROPERTY(Config, EditAnywhere)
    ESpeedState m_eJiggleSpeedState;
    
    UPROPERTY(Config, EditAnywhere)
    float m_TraceTargetCapsuleRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float m_TraceTargetCapsuleHalfHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fTraceTargetForObstacleFrequency;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_TraceTargetForObstacleChannel;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionResponseContainer m_TraceTargetForObstacleCollision;
    
    UPROPERTY(Config, EditAnywhere)
    FAIAttackHitDetectionVolume m_AttackHitDetectionVolume;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bUseCapsuleRadiusToDetectFriendlyFire;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iMaxComboStreak;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAlwaysLogComboEvaluationStack;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCombatPositionPathCostLimit;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<EAIPositioningOption> m_DefaultPositioningOptions;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_AttackTicketJokerComboAttackCount[3];
    
    UPROPERTY(Config, EditAnywhere)
    float m_fSpawningTimePerFrame;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UNavArea> m_TraversalNavArea;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNavAreaPerRange> m_ClimbNavArea;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNavAreaPerRange> m_DropDownNavAreas;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UTraversalDB> m_TraversalDb;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fTraversalLockTimer;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bIsTraversalLockTimerUniversal;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDefaultNavLinkCooldown;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fPatrolAcceptanceRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fTraversalZNavExtent;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fStopPredictionRequiredDistance[4];
    
    UPROPERTY(EditAnywhere)
    bool m_bCanSlowDownSpeedStateOnPathChanged;
    
    UPROPERTY(EditAnywhere)
    bool m_bStopLockOnEnemyIfFarFromEnemy;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDifficultyUpdateRate;
    
    UPROPERTY(Config, EditAnywhere)
    float m_DominationGaugeSteps[3];
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_MaxIndirectOponentPerDominationGauge[3];
    
    UPROPERTY(Config, EditAnywhere)
    float m_fTauntDifficultyBonus;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iTauntTicketBehaviorMask;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<ESCAICombatRoles, FTimerAndOffset> m_CombatRolesReactionTimes;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_fCombatRolesTestScoreFactors;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIChangeToIndirectRoleStates, float> m_fSwtichToIndirectOnStateTimers;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<EOrderType> m_ForbiddenOrdersForDirectOpponent;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCombatRolesRedistributionFallHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCombatRoleRedistributionRushInitialDelay;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fCombatRoleRedistributionRushUpdateDelay;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_fSuspiciousTestScoreFactors;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bActivateCancelDamagesOnWeaponsForAI;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fAIweaponDropImpulseMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_DefenseVsThrowableWindowFrameNb;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_DefenseVsThrowableStartWindowAnticipationFrameNb;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EDefenseTactics, float> m_DefenseTriggerWindowMaxDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fPrefightStructureBrokenLastChanceDuration;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iAvoidWindowMultiHitDelayFramesOffset;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iAvoidWindowEndMultiHitFramesOffset;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 m_uiThreateningActionsMask;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<EOrderType> m_eThreateningAttackOrders;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fFleeMinDist;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fTooCloseMaxDist;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bTriggerTooCloseOnlyDuringDialog;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bTriggerTooCloseOnlyOnJoinDialogActors;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UAIMasterArchetype> m_MasterArchetype;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fTicketManagerMaxIterationTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bTimeSliceTicketManagers;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bRunTicketManagerDuringSlate;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fBehaviorChangedMaxRandomDelays[6];
    
    UPROPERTY(Config, EditAnywhere)
    float m_fFidgetNearDeathMaxRatio;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iLastManBonusPerDomination[3];
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_LastManBonusPerCharges;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_LastManBonusPerDeathCounter;
    
    UPROPERTY(Config, EditAnywhere)
    FInt32Range m_iLastManValueDeviation;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UNavigationQueryFilter> m_NothingQueryFilter;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatRange m_fSanctuaryFirstBarkTriggerWindow;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatRange m_fSanctuaryFollowingBarkTriggerWindow;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AAIDirectorActor> m_AIDirectorClass;
    
    UGlobalAISettings();
};

