#include "SCMathTools.h"

class UCurveFloat;
class USplineComponent;

FVector USCMathTools::VectorCriticalSpringInterp(FVector _vCurrent, const FVector& _vTarget, FVector& _vInOutVelocity, float _fSpeedFactor, float _fDeltaTime) {
    return FVector{};
}

float USCMathTools::SearchReciprocalValueInCurve(const UCurveFloat* _curve, const float _fY) {
    return 0.0f;
}

FQuat USCMathTools::Rotator_Quat(const FRotator& _rot) {
    return FQuat{};
}

ESCCardinalPoints USCMathTools::RotateCardinalPoint(const ESCCardinalPoints _eCardinalPoint, const int32 _iClockwiseSteps) {
    return ESCCardinalPoints::North;
}

FVector USCMathTools::ProjectPointOnSegment(const FVector& _vA, const FVector& _vB, const FVector& _vPointToTest) {
    return FVector{};
}

FVector USCMathTools::ProjectPointOnLine(const FVector& _vA, const FVector& _vDir, const FVector& _vPointToTest) {
    return FVector{};
}

bool USCMathTools::IsNearlyLesserOrEqual(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool USCMathTools::IsNearlyGreaterOrEqual(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool USCMathTools::IsLesserWithEpsilon(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool USCMathTools::IsGreaterWithEpsilon(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool USCMathTools::IntersectionSegmentSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vStart, const FVector& _vDirNormalized, float _vLength, const FVector& _vSphereOrigin, const float _fSphereRadius) {
    return false;
}

bool USCMathTools::IntersectionLineSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vLineDeltaPosition, const FVector& _vLineDirNormalized, const FVector& _vSphereOrigin, const float _fSphereRadius) {
    return false;
}

bool USCMathTools::IntersectionCircleCircle(FVector2D& _vOutPointA, FVector2D& _vOutPointB, const FVector2D& _vCenter1, const float _fRadius1, const FVector2D& _vCenter2, const float _fRadius2) {
    return false;
}

FTransform USCMathTools::GetTransformLocalToGlobal(const FTransform& _transformBase, const FTransform& _localTransform) {
    return FTransform{};
}

FTransform USCMathTools::GetTransformGlobalToLocal(const FTransform& _transformBase, const FTransform& _globalTransform) {
    return FTransform{};
}

FQuat USCMathTools::GetQuatLocalToGlobal(const FQuat& _qBase, const FQuat& _qLocal) {
    return FQuat{};
}

FQuat USCMathTools::GetQuatGlobalToLocal(const FQuat& _qBase, const FQuat& _qGlobal) {
    return FQuat{};
}

FQuat USCMathTools::GetQuat(const FTransform& _transform) {
    return FQuat{};
}

FVector USCMathTools::GetPositionLocalToGlobal(const FTransform& _transformBase, const FVector& _localLocation) {
    return FVector{};
}

FVector USCMathTools::GetPositionGlobalToLocal(const FTransform& _transformBase, const FVector& _globalLocation) {
    return FVector{};
}

FPlane USCMathTools::GetPlaneFromDir(const FVector& _vLocation, const FVector& _vDir, float _fMaxSlopeAngleInRad) {
    return FPlane{};
}

FVector USCMathTools::GetLocalToGlobalRotator(const FRotator& _rotator, const FVector& _vLocal) {
    return FVector{};
}

FVector USCMathTools::GetLocalToGlobal(const FQuat& _qBase, const FVector& _vLocal) {
    return FVector{};
}

void USCMathTools::GetLocalLookAtYaw(const FVector& _fLookAtDirection, const float& _fRefBoneYawInDegrees, float _fMaxAngleInDegrees, bool _bAlwaysLookAt, float& _fOutLocalYaw, bool& _bOutIsLookAtValid) {
}

FVector USCMathTools::GetGlobalToLocalRotator(const FRotator& _rotator, const FVector& _vGlobal) {
    return FVector{};
}

FVector USCMathTools::GetGlobalToLocal(const FQuat& _qBase, const FVector& _vGlobal) {
    return FVector{};
}

float USCMathTools::GetDiffAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay) {
    return 0.0f;
}

float USCMathTools::GetDestinationAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay, int32 _iExtra2Pi) {
    return 0.0f;
}

float USCMathTools::GetBlendAngleForceWay(float _fSource, float _fDest, float _fBlendCoef, ESCRotationWay _eBlendWay, int32 _iExtra2Pi) {
    return 0.0f;
}

float USCMathTools::GetBlendAngle(float _fSource, float _fDest, float _fBlendCoef) {
    return 0.0f;
}

float USCMathTools::GetAngleNegPiToPi(float _fAngle) {
    return 0.0f;
}

ESCRotationWay USCMathTools::GetAngleBlendWay(float _fSource, float _fDest) {
    return ESCRotationWay::ClockWise;
}

float USCMathTools::GetAngle2Pi(float _fAngle) {
    return 0.0f;
}

float USCMathTools::FloatCriticalSpringInterp(float _fCurrent, const float& _fTarget, float& _fInOutVelocity, float _fSpeedFactor, float _fDeltaTime) {
    return 0.0f;
}

float USCMathTools::Cursorized(float _fValue, float _fLeftMargin, float _fRightMargin, bool _bClamp) {
    return 0.0f;
}

ESCCardinalPoints USCMathTools::ComputeCardinalPointWithCustomAngles(const FVector& _vRefDir, const FVector& _vOtherVector, float _fNorthAngleDeg, float _fSouthAngleDeg) {
    return ESCCardinalPoints::North;
}

ESCCardinalPoints USCMathTools::ComputeCardinalPointEastWest(const FVector& _vRefDir, const FVector& _vOtherVector) {
    return ESCCardinalPoints::North;
}

ESCCardinalPoints USCMathTools::ComputeCardinalPoint(const FVector& _vRefDir, const FVector& _vOtherVector) {
    return ESCCardinalPoints::North;
}

float USCMathTools::ComputeBlendRatio(float _fRatio, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) {
    return 0.0f;
}

float USCMathTools::BPF_GetSplineRatioFromLocation(const FVector& _vLocation, const USplineComponent* _spline, float _fRangeMin, float _fRangeMax) {
    return 0.0f;
}

float USCMathTools::AngleBetweenVectorHorizontal(FVector _v1Normalized, FVector _v2Normalized) {
    return 0.0f;
}

float USCMathTools::AngleBetweenVectorAbsolute(FVector _v1Normalized, FVector _v2Normalized, FVector _vAxisNormalized) {
    return 0.0f;
}

void USCMathTools::AngleBetweenVector(float& _fHorizontalAngle, float& _fVerticalAngle, FVector _v1Normalized, FVector _v2Normalized) {
}

USCMathTools::USCMathTools() {
}

