#include "OrderFallOnSlopeDB.h"




UOrderFallOnSlopeDB::UOrderFallOnSlopeDB() {
    this->m_bPhysicAnimEnabled = true;
    this->m_fFallVelocityThreshold = 10.00f;
    this->m_fSlopeGroundAngleThreshold = 20.00f;
    this->m_fSlopeRampAngleThreshold = 15.00f;
    this->m_PhysicalAnimationProfile = TEXT("Slope");
    this->m_fActorRotationFromPelvisForward = 90.00f;
    this->m_fFloorDetectionLengthFromPelvis = 130.00f;
    this->m_fPelvisVerticalOffset = 10.00f;
    this->m_PhysicAsset = NULL;
    this->m_fStartupDuration = 0.10f;
    this->m_fVelocityPushCoef = 0.00f;
    this->m_fTotalMaxDuration = 8.00f;
    this->m_Loop = NULL;
    this->m_bPlayInstantRecoveryAnim = true;
    this->m_bPlayInstantRecoveryAnimOnPlaneGround = true;
    this->m_PoseSnapshotName = TEXT("RagdollSnapshot");
    this->m_bMirrorFallOnRightSide = true;
    //this->m_RTCPSpeed = NULL;
    this->m_bCallRTPCOnSelf = false;
}

