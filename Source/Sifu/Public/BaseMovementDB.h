#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SCCore InheritedDataAsset
#include "InheritedDataAsset.h"
#include "SpeedStateBlendTo.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "reeMoveAnimQuadrant.h"
#include "CardinalSpeed.h"
//CROSS-MODULE INCLUDE: SCCore Bool
#include "Bool.h"
#include "LockMoveAnimQuadrant.h"
//CROSS-MODULE INCLUDE: SCCore ESCBlendType
#include "ESCBlendType.h"
#include "LocomotionRotationParams.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ESpeedState.h"
#include "BaseMovementDB.generated.h"

class UDetailedMoveTransitionDB;
class UTransitionAnimRequest;
class USpeedPivotFootData;
class UCurveFloat;
class UDodgeDB;

UCLASS(BlueprintType)
class SIFU_API UBaseMovementDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDetailedMoveTransitionDB* m_DetailedMoveTransitionDB;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTransitionAnimRequest> m_TransitionAnimRequest;
    
    UPROPERTY(EditAnywhere)
    FSpeedStateBlendTo m_BlendDescription[4];
    
    UPROPERTY(EditAnywhere)
    float m_fRushMoveAnimSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fRushMoveOverallStretchFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fRushMoveMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fRushMoveTransitionMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fRushStaminaConsumptionRate;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_RushStaminaConsumptionOverWeightRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fRushCooldownBurnAllStamina;
    
    UPROPERTY(EditAnywhere)
    float m_fWantToRushInLockMoveTimeOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bSwitchToExploOnLongRush;
    
    UPROPERTY(EditAnywhere)
    float m_fRushDurationToExplo;
    
    UPROPERTY(EditAnywhere)
    bool m_bAuthorizeMirroring;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimContainer> m_AlertedAIIdlesAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimContainer> m_BaseAIIdlesAnims;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FreeMoveAnim[4];
    
    UPROPERTY(EditAnywhere)
    FreeMoveAnimQuadrant m_FreeMoveAnimQuadrant[4];
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FreeMoveAnimWeapon[4];
    
    UPROPERTY(EditAnywhere)
    FreeMoveAnimQuadrant m_FreeMoveAnimWeaponQuadrant[4];
    
    UPROPERTY(EditAnywhere)
    FCardinalSpeed m_LockMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fLockMoveOverallStretchFactor;
    
    UPROPERTY(EditAnywhere)
    FCardinalSpeed m_FreeMoveSpeeds[4];
    
    UPROPERTY(EditAnywhere)
    float m_fFreeMoveV1AnimSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fFreeMoveV1OverallStretchFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fFreeMoveV2AnimSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fFreeMoveV2OverallStretchFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fFreeMoveMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fFreeMoveTransitionMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    FBool m_bCamOverTheShoulder[4];
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiLookAtLockMoveTargetAllowedPerAlertLevelMask;
    
    UPROPERTY(EditAnywhere)
    FLockMoveAnimQuadrant m_LockMoveAnim;
    
    UPROPERTY(EditAnywhere)
    FLockMoveAnimQuadrant m_LockMoveAnimWeapon;
    
    UPROPERTY(EditAnywhere)
    float m_fAnimNorthSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fAnimSouthSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fAnimEastSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fAnimWestSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fLockMoveMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fLockMoveTransitionMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fV3LandingVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fV2LandingVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fV1LandingVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fV3ActionToLocomotionSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fV2ActionToLocomotionSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fV1ActionToLocomotionSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fActionToLocomotionBlendDuration;
    
    UPROPERTY(EditAnywhere)
    ESCBlendType m_eActionToLocomotionBlendType;
    
    UPROPERTY(EditAnywhere)
    float m_WeightCategoryMobilityRatios[4];
    
    UPROPERTY(EditAnywhere)
    float m_WeightCategoryMobilityRatiosLockMove[4];
    
    UPROPERTY(EditAnywhere)
    bool m_bOverweightImpactFreemoveState;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_LockMoveVelocityLerpCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_FreeMoveVelocityLerpCurves[4];
    
    UPROPERTY(EditAnywhere)
    FLocomotionRotationParams m_LockMoveRotationParams[4];
    
    UPROPERTY(EditAnywhere)
    FLocomotionRotationParams m_FreeMoveRotationParams[4];
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_AccumulationRotationDelayTimeRange;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_RotationSpeedMultiplierByTime;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableTransitions;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxStrafeDeltaAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fStartInterruptFirstStepRatio;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreeMoveEnableAnimTransitions;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreeMoveEnablePivotFoot;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockMoveEnableAnimTransitions;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockMoveEnablePivotFoot;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableInputStabilisationOnMove;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableSpeedBlender;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxCoeffToUsePreviousSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxCoeffOrderedToUsePreviousSpeed;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiForceKeepForwardOnStartsByMoveStatus;
    
    UPROPERTY(EditAnywhere)
    USpeedPivotFootData* m_FreeMovePivotFootParams[4];
    
    UPROPERTY(EditAnywhere)
    USpeedPivotFootData* m_LockMovePivotFootParams;
    
    UPROPERTY(EditAnywhere)
    UDodgeDB* m_DodgeDB;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const;
    
    UBaseMovementDB();
};

