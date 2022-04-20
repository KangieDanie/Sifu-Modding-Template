#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAnimInstance
#include "SCAnimInstance.h"
#include "BlendSpaceContainer.h"
#include "ELimbs.h"
#include "EQuadrantTypes.h"
#include "ESpeedState.h"
#include "AnimStructMoveTransition.h"
#include "AnimStructAttack.h"
#include "AnimQuadrantStruct.h"
#include "AnimStruct4.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "EMoveTransitionType.h"
#include "EOrderType.h"
#include "BlendSpaceDirectionContainer.h"
#include "AnimStructBase.h"
#include "EMoveStatus.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "AnimStructOverride.h"
#include "AnimStructTraversal.h"
#include "EFallLevel.h"
#include "AnimStructVariableWeight.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AnimStructHandPose.h"
#include "AnimStructEmote.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SpeedDescriptionStruct.h"
#include "MovementMode.h"
#include "BlendSpaceStructBase.h"
#include "LookAtAnimHandler.h"
#include "MoveStatus.h"
//CROSS-MODULE INCLUDE: Engine PoseSnapshot
#include "EMoveDirections.h"
#include "SpeedState.h"
#include "EGlobalBehaviors.h"
#include "ETransitionGlobalType.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ESaveBone.h"
#include "PlayerAnim.generated.h"

class UAnimSequence;
class UBaseMovementDB;
class UHandPoseDB;
class UCurveVector;
class UCurveFloat;

UCLASS(NonTransient)
class SIFU_API UPlayerAnim : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    TArray<float> m_StateWeightArray;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    TArray<float> m_VariableWeightLayerWeight;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimStructMoveTransition m_StartAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimStructMoveTransition m_StopAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimStructMoveTransition m_UTurnAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimStructMoveTransition m_LandingAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimStructMoveTransition m_TurnInPlaceAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EQuadrantTypes m_eAnimQuadrant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    float m_fFreeMoveV1V2ThresholdSpeed;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FAnimStructAttack m_AttackStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimQuadrantStruct m_QuadrantStruct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_IdleAnimContainerFL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_IdleAnimContainerFR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_IdleAnimContainerBR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_IdleAnimContainerBL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStructBase m_DodgeStruct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStructOverride m_V0OverrideStruct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize, Replicated)
    TArray<UAnimSequence*> m_GuardAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize, Replicated)
    bool m_bGuardMirrorFrontRightBackLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize, Replicated)
    TArray<UAnimSequence*> m_GuardAnimWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize, Replicated)
    TArray<UAnimSequence*> m_GuardPrepAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize, Replicated)
    TArray<UAnimSequence*> m_GuardPrepAnimWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    bool m_bGuardInProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float m_fGuardPrepRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStruct4 m_PlayAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    EOrderType m_ePlayAnimOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStructVariableWeight m_WeaponActionAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_LastActionAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bLastActionAnimInMirror;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fLastActionAnimCursor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fLastActionAnimIdealCursor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStructHandPose m_HandPoseAnimStruct;
    
    UPROPERTY(EditAnywhere)
    UHandPoseDB* m_HandPoseDB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStructEmote m_EmoteAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
    FVector m_vOwnerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
    float m_fOwnerVelocityLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bIsBlendSpaceAngleValid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_fBlendSpaceAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_fBlendspaceAngleMirror;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    FSpeedDescriptionStruct m_LockMoveSpeedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    FSpeedDescriptionStruct m_FreeMoveV1SpeedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    FSpeedDescriptionStruct m_FreeMoveV2SpeedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    FSpeedDescriptionStruct m_FreeMoveV3SpeedDescription;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralLeanDeactivationDamping;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralLeanDamping;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralLeanRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralLeanMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float m_ProceduralLeanLerpTarget[4];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator m_ProceduralLeanAngleRotator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MovementMode)
    FMovementMode m_MovementMode;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bCheatFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    EFallLevel m_eFallLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FBlendSpaceStructBase m_PlayBlendSpaceStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimStructVariableWeight m_FidgetAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimStructVariableWeight m_WeaponIdleAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_WeaponIdleVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimStructVariableWeight m_OpeningDoorAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimContainer m_PickUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_PickUpAnimVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimContainer m_DropWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_DropWeaponAnimVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FAnimContainer m_HandSwapWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_HandSwapWeaponAnimVariableWeightLayer;
    
    UPROPERTY(EditAnywhere)
    FName m_TraversalIKAnimInstanceName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bProceduralLandingActive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bCascadeIsInSlope;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bCascadeIsLethal;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    bool m_bRagdollInProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_RagdollInProgressSnapshotName;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float m_fWantedSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_optimizationFrameAnimContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_FreeMoveAnimContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimContainer m_FreeMoveMirroredAnimContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLookAtAnimHandler m_LookAtAnimHandler;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bOverridePoseWithSnapshot;
    
    UPROPERTY(BlueprintReadOnly)
    FPoseSnapshot m_PoseSnapshotOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FAnimStructTraversal m_TraversalAnimStruct;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EQuadrantTypes m_eForcedQuadrant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSpine1AlphaMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSpine2AlphaMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSpine3AlphaMax;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fSpine1Alpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fSpine2Alpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fSpine3Alpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fSpineModifsWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vProceduralShakePelvisOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fProceduralShakePelvisWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fProceduralLandingPelvisHeight;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool m_bFallInProgress1;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool m_bFallInProgress2;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fProceduralLandingWeight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EMoveDirections m_eVerticalMovementDirection;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EMoveDirections m_eHorizontalMovementDirection;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bUseUpperBodySyncLayer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fHandPoseBlendWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bHandPoseBlendWeightIsNullOrNegative;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MoveStatus)
    FMoveStatus m_MoveStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_SpeedState)
    FSpeedState m_SpeedState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bOptimizationFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseMovementDB* m_BaseMovementDB;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool m_bCarryAnimatedWeapon;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool m_bCarryWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float m_fSpeedStateAlphaV0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float m_fSpeedStateAlphaV1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float m_fSpeedStateAlphaV2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float m_fSpeedStateAlphaV3;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    float m_fBodyPartDesynchronizationWeight;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fSpineModifWeaponBlendDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_ProceduralShakeCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralShakePlayRate;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralShakeStrength;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_ProceduralLandingCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralLandingDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralLandingBlendOutSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralMediumLandingAmplitudeCoef;
    
    UPROPERTY(EditAnywhere)
    float m_fProceduralMediumLandingDurationCoef;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AnimLayerByStunCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fAlphaSpine1MaxNoDrunken;
    
    UPROPERTY(EditAnywhere)
    float m_fAlphaSpine2MaxNoDrunken;
    
    UPROPERTY(EditAnywhere)
    float m_fAlphaSpine3MaxNoDrunken;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendSwitchWeaponFamilyDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fVariableWeightIntoBlendTime;
    
    UPROPERTY(EditAnywhere)
    float m_fVariableWeightOutOfBlendTime;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> m_SetOfStateToIgnoreInVariableWeight;
    
    UPROPERTY(EditAnywhere)
    FName m_VariableWeightMasterStateName;
    
    UPROPERTY(EditAnywhere)
    FName m_PlayAnimSubAnimInstanceTags[4];
    
    UPROPERTY(EditAnywhere)
    FName m_AttackSubAnimInstanceTags[2];
    
    UPROPERTY(EditAnywhere)
    FName m_LookAtSubAnimInstanceTag;
    
    UPROPERTY(EditAnywhere)
    float m_fSpeedInterpolationForSpeedState;
    
    UPROPERTY()
    FSCUserDefinedEnumHandler m_LayerEnumForVariableWeight;
    
protected:
    UFUNCTION()
    void OnRep_SpeedState();
    
    UFUNCTION()
    void OnRep_MoveStatus();
    
public:
    UFUNCTION()
    void OnRep_MovementMode();
    
private:
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintPure)
    static bool IsV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsUTurnV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsUTurnV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsUTurnV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsUTurnType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsTurnInPlaceType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStrafeV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStrafeV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStrafeType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStopV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStopV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStopV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStopType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsStartType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsOrientedStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsOrientedStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsOrientedStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsNorthStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsNorthStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsNorthStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsNorthStartType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsLandingType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintPure)
    static EMoveTransitionType GetUTurnTypeFromAnimState(EMoveTransitionType _eCurrentTurnType, uint8 _uiAnimState);
    
    UFUNCTION(BlueprintPure)
    static ESpeedState GetTransitionSpeedState(EMoveTransitionType _enumValue, bool _bSafe);
    
    UFUNCTION(BlueprintPure)
    static ETransitionGlobalType GetTransitionGlobalType(EMoveTransitionType _eTransition);
    
    UFUNCTION(BlueprintPure)
    FVector GetTrackingPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintPure)
    float GetStateWeight(int32 _iStateID);
    
    UFUNCTION(BlueprintPure)
    FTransform GetSavedTransformFromSaveBone(ESaveBone _eSaveBone) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSaveBoneAsName(ESaveBone _eSaveBone) const;
    
    UFUNCTION(BlueprintPure)
    EMoveTransitionType GetLastUTurnTransitionType();
    
    UFUNCTION(BlueprintPure)
    EMoveTransitionType GetLastStartTransitionType();
    
    UFUNCTION(BlueprintPure)
    FVector GetHitTargetPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintPure)
    float GetAimIKAlpha(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVariableWeightBlendDurationOverride(const FSCUserDefinedEnumHandler& _userEnum, bool _bBlendOut, bool _bOverride, float _fOverrideDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpineAlphaMax(float _fSpine1Alpha, float _fSpine2Alpha, float _fSpine3Alpha);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpeedState(ESpeedState _eSpeedState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetVariableWeightInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum);
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsLookAtBySubAnimInstanceEnabled() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsIntransition() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetVariableWeightMirrorCoeff(const FSCUserDefinedEnumHandler& _userEnum) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetVariableWeightAlpha(const FSCUserDefinedEnumHandler& _userEnum) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum, bool _bMirror);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMoveStatusChanged();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerAnim();
};

