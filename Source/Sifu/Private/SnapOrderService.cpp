#include "SnapOrderService.h"
#include "Templates/SubclassOf.h"

class AFightingCharacter;
class USnapOrderService;

void USnapOrderService::BPF_SetCustomSnapOrderServiceTransform(const FTransform& _transform, TSubclassOf<USnapOrderService> _serviceClass, const AFightingCharacter* _character, uint8 _uiOrderId) {
}

void USnapOrderService::BPF_BindTargetTransformDelegate(const FBPOrderServiceInstance& _self, const FBPOrderServiceInstance& _targetServiceInstance, const FSnapOrderServiceDelegate& _delegate) {
}

FTransform USnapOrderService::BPE_GetTargetTransform_Implementation(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady) const {
    return FTransform{};
}

USnapOrderService::USnapOrderService() {
    this->m_bNeedTargetActor = true;
    this->m_bTickBeforeTargetActor = true;
    this->m_bMimicTargetFloorDist = true;
    this->m_SelfBoneName = TEXT("Root");
    this->m_TranslationCurve = TEXT("SnapTranslation");
    this->m_RotationCurve = TEXT("SnapRotation");
    this->m_bUseSelfBoneRatio = false;
    this->m_fSelfBoneRatio = 1.00f;
    this->m_fTargetRotationOffset = 0.00f;
    this->m_bSnapSelfBoneToGround = true;
    this->m_TargetBoneName = TEXT("custom_joint_05");
    this->m_Dynamic = NULL;
    this->m_bUseTransitionFrames = true;
    this->m_fTransitionFrames = 10.00f;
    this->m_TransitionUntilOrderService = NULL;
    this->m_bStopWhenTransitionOrderServiceStarted = false;
    this->m_StartSnappingAfterTargetService = NULL;
    this->m_bDisableCollisions = false;
    this->m_bDisableCollisionsWithStaticMesh = false;
    this->m_bPredictTargetRedirection = true;
    this->m_bPredictTargetSnap = true;
    this->m_bSnapTranslationFollowDynamicCurve = false;
    this->m_SnapTranslationDynamic = NULL;
    this->m_bForceLinearSnap = false;
    this->m_fMaxSnapSpeed = 1000.00f;
    this->m_fMaxCumulatedDistance = -1.00f;
    this->m_fMaxCumulatedAngularDistance = -1.00f;
    this->m_fMaxAngularSpeed = -1.00f;
    this->m_fMaxDistanceToNavmesh = 30.00f;
}

