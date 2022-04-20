#include "PlayerAnim.h"
#include "Net/UnrealNetwork.h"

void UPlayerAnim::OnRep_SpeedState() {
}

void UPlayerAnim::OnRep_MoveStatus() {
}

void UPlayerAnim::OnRep_MovementMode() {
}

void UPlayerAnim::OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog) {
}

bool UPlayerAnim::IsV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsTurnInPlaceType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStrafeV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStrafeV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStrafeType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsOrientedStartV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsOrientedStartV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsOrientedStartV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsNorthStartV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsNorthStartV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsNorthStartV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsNorthStartType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsLandingType(EMoveTransitionType _enumValue) {
    return false;
}

EMoveTransitionType UPlayerAnim::GetUTurnTypeFromAnimState(EMoveTransitionType _eCurrentTurnType, uint8 _uiAnimState) {
    return EMoveTransitionType::StopV1;
}

ESpeedState UPlayerAnim::GetTransitionSpeedState(EMoveTransitionType _enumValue, bool _bSafe) {
    return ESpeedState::V0;
}

ETransitionGlobalType UPlayerAnim::GetTransitionGlobalType(EMoveTransitionType _eTransition) {
    return ETransitionGlobalType::Start;
}

FVector UPlayerAnim::GetTrackingPosition(ELimbs _eLimbs, int32 _iAttackStateID) {
    return FVector{};
}

float UPlayerAnim::GetStateWeight(int32 _iStateID) {
    return 0.0f;
}

FTransform UPlayerAnim::GetSavedTransformFromSaveBone(ESaveBone _eSaveBone) const {
    return FTransform{};
}

FName UPlayerAnim::GetSaveBoneAsName(ESaveBone _eSaveBone) const {
    return NAME_None;
}

EMoveTransitionType UPlayerAnim::GetLastUTurnTransitionType() {
    return EMoveTransitionType::StopV1;
}

EMoveTransitionType UPlayerAnim::GetLastStartTransitionType() {
    return EMoveTransitionType::StopV1;
}

FVector UPlayerAnim::GetHitTargetPosition(ELimbs _eLimbs, int32 _iAttackStateID) {
    return FVector{};
}

float UPlayerAnim::GetAimIKAlpha(ELimbs _eLimbs, int32 _iAttackStateID) {
    return 0.0f;
}

void UPlayerAnim::BPF_SetVariableWeightBlendDurationOverride(const FSCUserDefinedEnumHandler& _userEnum, bool _bBlendOut, bool _bOverride, float _fOverrideDuration) {
}

void UPlayerAnim::BPF_SetSpineAlphaMax(float _fSpine1Alpha, float _fSpine2Alpha, float _fSpine3Alpha) {
}

void UPlayerAnim::BPF_SetSpeedState(ESpeedState _eSpeedState) {
}

void UPlayerAnim::BPF_SetMoveStatus(EMoveStatus _eMoveStatus) {
}

void UPlayerAnim::BPF_ResetVariableWeightInfo() {
}

void UPlayerAnim::BPF_RemoveVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum) {
}

bool UPlayerAnim::BPF_IsLookAtBySubAnimInstanceEnabled() const {
    return false;
}

bool UPlayerAnim::BPF_IsIntransition() const {
    return false;
}

float UPlayerAnim::BPF_GetVariableWeightMirrorCoeff(const FSCUserDefinedEnumHandler& _userEnum) const {
    return 0.0f;
}

float UPlayerAnim::BPF_GetVariableWeightAlpha(const FSCUserDefinedEnumHandler& _userEnum) const {
    return 0.0f;
}

void UPlayerAnim::BPF_AddVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum, bool _bMirror) {
}


void UPlayerAnim::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerAnim, m_StateWeightArray);
    DOREPLIFETIME(UPlayerAnim, m_VariableWeightLayerWeight);
    DOREPLIFETIME(UPlayerAnim, m_StartAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_StopAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_UTurnAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_LandingAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_TurnInPlaceAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_fFreeMoveV1V2ThresholdSpeed);
    DOREPLIFETIME(UPlayerAnim, m_AttackStruct);
    DOREPLIFETIME(UPlayerAnim, m_QuadrantStruct);
    DOREPLIFETIME(UPlayerAnim, m_IdleAnimContainerFL);
    DOREPLIFETIME(UPlayerAnim, m_IdleAnimContainerFR);
    DOREPLIFETIME(UPlayerAnim, m_IdleAnimContainerBR);
    DOREPLIFETIME(UPlayerAnim, m_IdleAnimContainerBL);
    DOREPLIFETIME(UPlayerAnim, m_IdleUpperBodyBlendSpaceContainerFL);
    DOREPLIFETIME(UPlayerAnim, m_IdleUpperBodyBlendSpaceContainerFR);
    DOREPLIFETIME(UPlayerAnim, m_IdleUpperBodyBlendSpaceContainerBR);
    DOREPLIFETIME(UPlayerAnim, m_IdleUpperBodyBlendSpaceContainerBL);
    DOREPLIFETIME(UPlayerAnim, m_DodgeStruct);
    DOREPLIFETIME(UPlayerAnim, m_V0OverrideStruct);
    DOREPLIFETIME(UPlayerAnim, m_GuardAnim);
    DOREPLIFETIME(UPlayerAnim, m_bGuardMirrorFrontRightBackLeft);
    DOREPLIFETIME(UPlayerAnim, m_GuardAnimWeapon);
    DOREPLIFETIME(UPlayerAnim, m_GuardPrepAnim);
    DOREPLIFETIME(UPlayerAnim, m_GuardPrepAnimWeapon);
    DOREPLIFETIME(UPlayerAnim, m_bGuardInProgress);
    DOREPLIFETIME(UPlayerAnim, m_fGuardPrepRatio);
    DOREPLIFETIME(UPlayerAnim, m_PlayAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_ePlayAnimOrder);
    DOREPLIFETIME(UPlayerAnim, m_WeaponActionAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_HandPoseAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_EmoteAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_vOwnerVelocity);
    DOREPLIFETIME(UPlayerAnim, m_fOwnerVelocityLength);
    DOREPLIFETIME(UPlayerAnim, m_LockMoveSpeedDescription);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveV1SpeedDescription);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveV2SpeedDescription);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveV3SpeedDescription);
    DOREPLIFETIME(UPlayerAnim, m_MovementMode);
    DOREPLIFETIME(UPlayerAnim, m_bCheatFlying);
    DOREPLIFETIME(UPlayerAnim, m_eFallLevel);
    DOREPLIFETIME(UPlayerAnim, m_PlayBlendSpaceStruct);
    DOREPLIFETIME(UPlayerAnim, m_FidgetAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_WeaponIdleAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_OpeningDoorAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_PickUpAnim);
    DOREPLIFETIME(UPlayerAnim, m_DropWeaponAnim);
    DOREPLIFETIME(UPlayerAnim, m_HandSwapWeaponAnim);
    DOREPLIFETIME(UPlayerAnim, m_bRagdollInProgress);
    DOREPLIFETIME(UPlayerAnim, m_fWantedSpeed);
    DOREPLIFETIME(UPlayerAnim, m_optimizationFrameAnimContainer);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveAnimContainer);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveMirroredAnimContainer);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveBlendSpaceV1);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveBlendSpaceV2);
    DOREPLIFETIME(UPlayerAnim, m_FreeMoveBlendSpaceV3);
    DOREPLIFETIME(UPlayerAnim, m_TraversalAnimStruct);
    DOREPLIFETIME(UPlayerAnim, m_eForcedQuadrant);
    DOREPLIFETIME(UPlayerAnim, m_bFallInProgress1);
    DOREPLIFETIME(UPlayerAnim, m_bFallInProgress2);
    DOREPLIFETIME(UPlayerAnim, m_MoveStatus);
    DOREPLIFETIME(UPlayerAnim, m_SpeedState);
    DOREPLIFETIME(UPlayerAnim, m_bCarryAnimatedWeapon);
    DOREPLIFETIME(UPlayerAnim, m_bCarryWeapon);
    DOREPLIFETIME(UPlayerAnim, m_fSpeedStateAlphaV0);
    DOREPLIFETIME(UPlayerAnim, m_fSpeedStateAlphaV1);
    DOREPLIFETIME(UPlayerAnim, m_fSpeedStateAlphaV2);
    DOREPLIFETIME(UPlayerAnim, m_fSpeedStateAlphaV3);
    DOREPLIFETIME(UPlayerAnim, m_fBodyPartDesynchronizationWeight);
}

UPlayerAnim::UPlayerAnim() {
    this->m_eAnimQuadrant = EQuadrantTypes::FrontLeft;
    this->m_fFreeMoveV1V2ThresholdSpeed = 250.00f;
    this->m_GuardAnim.AddDefaulted(4);
    this->m_bGuardMirrorFrontRightBackLeft = false;
    this->m_GuardAnimWeapon.AddDefaulted(4);
    this->m_GuardPrepAnim.AddDefaulted(4);
    this->m_GuardPrepAnimWeapon.AddDefaulted(4);
    this->m_bGuardInProgress = false;
    this->m_fGuardPrepRatio = 0.00f;
    this->m_ePlayAnimOrder = EOrderType::None;
    this->m_LastActionAnim = NULL;
    this->m_bLastActionAnimInMirror = false;
    this->m_fLastActionAnimCursor = 0.00f;
    this->m_fLastActionAnimIdealCursor = 0.00f;
    this->m_HandPoseDB = NULL;
    this->m_fOwnerVelocityLength = 0.00f;
    this->m_bIsBlendSpaceAngleValid = false;
    this->m_fBlendSpaceAngle = 0.00f;
    this->m_fBlendspaceAngleMirror = 0.00f;
    this->m_fProceduralLeanDeactivationDamping = 12.00f;
    this->m_fProceduralLeanDamping = 3.00f;
    this->m_fProceduralLeanRatio = 0.50f;
    this->m_fProceduralLeanMaxAngle = 20.00f;
    this->m_ProceduralLeanLerpTarget[0] = 0.00f;
    this->m_ProceduralLeanLerpTarget[1] = 0.00f;
    this->m_ProceduralLeanLerpTarget[2] = 0.00f;
    this->m_ProceduralLeanLerpTarget[3] = 0.00f;
    this->m_bCheatFlying = false;
    this->m_eFallLevel = EFallLevel::Light;
    this->m_TraversalIKAnimInstanceName = TEXT("TraversakIK");
    this->m_bProceduralLandingActive = false;
    this->m_bCascadeIsInSlope = false;
    this->m_bCascadeIsLethal = false;
    this->m_bRagdollInProgress = false;
    this->m_RagdollInProgressSnapshotName = TEXT("RagdollInProgress");
    this->m_fWantedSpeed = 0.00f;
    this->m_bOverridePoseWithSnapshot = false;
    this->m_eForcedQuadrant = EQuadrantTypes::None;
    this->m_fSpine1AlphaMax = 0.50f;
    this->m_fSpine2AlphaMax = 0.30f;
    this->m_fSpine3AlphaMax = 0.50f;
    this->m_fSpine1Alpha = 0.50f;
    this->m_fSpine2Alpha = 0.30f;
    this->m_fSpine3Alpha = 0.50f;
    this->m_fSpineModifsWeight = 1.00f;
    this->m_fProceduralShakePelvisWeight = 0.00f;
    this->m_fProceduralLandingPelvisHeight = 0.00f;
    this->m_bFallInProgress1 = false;
    this->m_bFallInProgress2 = false;
    this->m_fProceduralLandingWeight = 0.00f;
    this->m_eVerticalMovementDirection = EMoveDirections::Forward;
    this->m_eHorizontalMovementDirection = EMoveDirections::Right;
    this->m_bUseUpperBodySyncLayer = false;
    this->m_fHandPoseBlendWeight = 0.00f;
    this->m_bHandPoseBlendWeightIsNullOrNegative = true;
    this->m_bOptimizationFrame = true;
    this->m_BaseMovementDB = NULL;
    this->m_bCarryAnimatedWeapon = false;
    this->m_bCarryWeapon = false;
    this->m_fSpeedStateAlphaV0 = 0.00f;
    this->m_fSpeedStateAlphaV1 = 0.00f;
    this->m_fSpeedStateAlphaV2 = 0.00f;
    this->m_fSpeedStateAlphaV3 = 0.00f;
    this->m_fBodyPartDesynchronizationWeight = 1.00f;
    this->m_fSpineModifWeaponBlendDuration = 0.20f;
    this->m_ProceduralShakeCurve = NULL;
    this->m_fProceduralShakePlayRate = 1.00f;
    this->m_fProceduralShakeStrength = 1.00f;
    this->m_ProceduralLandingCurve = NULL;
    this->m_fProceduralLandingDuration = 1.00f;
    this->m_fProceduralLandingBlendOutSpeed = 80.00f;
    this->m_fProceduralMediumLandingAmplitudeCoef = 1.50f;
    this->m_fProceduralMediumLandingDurationCoef = 1.50f;
    this->m_AnimLayerByStunCurve = NULL;
    this->m_fAlphaSpine1MaxNoDrunken = 0.50f;
    this->m_fAlphaSpine2MaxNoDrunken = 0.30f;
    this->m_fAlphaSpine3MaxNoDrunken = 0.50f;
    this->m_fBlendSwitchWeaponFamilyDuration = 0.40f;
    this->m_fVariableWeightIntoBlendTime = 0.20f;
    this->m_fVariableWeightOutOfBlendTime = 0.20f;
    this->m_VariableWeightMasterStateName = TEXT("Master");
    this->m_fSpeedInterpolationForSpeedState = 5.00f;
}

