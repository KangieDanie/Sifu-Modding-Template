#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ESCCardinalPoints.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Plane
#include "ESCRotationWay.h"
#include "ESCBlendType.h"
#include "SCMathTools.generated.h"

class UCurveFloat;
class USplineComponent;

UCLASS(BlueprintType)
class SCCORE_API USCMathTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static FVector VectorCriticalSpringInterp(FVector _vCurrent, const FVector& _vTarget, UPARAM(Ref) FVector& _vInOutVelocity, float _fSpeedFactor, float _fDeltaTime);
    
    UFUNCTION(BlueprintPure)
    static float SearchReciprocalValueInCurve(const UCurveFloat* _curve, const float _fY);
    
    UFUNCTION(BlueprintPure)
    static FQuat Rotator_Quat(const FRotator& _rot);
    
    UFUNCTION(BlueprintCallable)
    static ESCCardinalPoints RotateCardinalPoint(const ESCCardinalPoints _eCardinalPoint, const int32 _iClockwiseSteps);
    
    UFUNCTION(BlueprintPure)
    static FVector ProjectPointOnSegment(const FVector& _vA, const FVector& _vB, const FVector& _vPointToTest);
    
    UFUNCTION(BlueprintPure)
    static FVector ProjectPointOnLine(const FVector& _vA, const FVector& _vDir, const FVector& _vPointToTest);
    
    UFUNCTION(BlueprintPure)
    static bool IsNearlyLesserOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool IsNearlyGreaterOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool IsLesserWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool IsGreaterWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool IntersectionSegmentSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vStart, const FVector& _vDirNormalized, float _vLength, const FVector& _vSphereOrigin, const float _fSphereRadius);
    
    UFUNCTION(BlueprintPure)
    static bool IntersectionLineSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vLineDeltaPosition, const FVector& _vLineDirNormalized, const FVector& _vSphereOrigin, const float _fSphereRadius);
    
    UFUNCTION(BlueprintPure)
    static bool IntersectionCircleCircle(FVector2D& _vOutPointA, FVector2D& _vOutPointB, const FVector2D& _vCenter1, const float _fRadius1, const FVector2D& _vCenter2, const float _fRadius2);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetTransformLocalToGlobal(const FTransform& _transformBase, const FTransform& _localTransform);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetTransformGlobalToLocal(const FTransform& _transformBase, const FTransform& _globalTransform);
    
    UFUNCTION(BlueprintPure)
    static FQuat GetQuatLocalToGlobal(const FQuat& _qBase, const FQuat& _qLocal);
    
    UFUNCTION(BlueprintPure)
    static FQuat GetQuatGlobalToLocal(const FQuat& _qBase, const FQuat& _qGlobal);
    
    UFUNCTION(BlueprintPure)
    static FQuat GetQuat(const FTransform& _transform);
    
    UFUNCTION(BlueprintPure)
    static FVector GetPositionLocalToGlobal(const FTransform& _transformBase, const FVector& _localLocation);
    
    UFUNCTION(BlueprintPure)
    static FVector GetPositionGlobalToLocal(const FTransform& _transformBase, const FVector& _globalLocation);
    
    UFUNCTION(BlueprintPure)
    static FPlane GetPlaneFromDir(const FVector& _vLocation, const FVector& _vDir, float _fMaxSlopeAngleInRad);
    
    UFUNCTION(BlueprintPure)
    static FVector GetLocalToGlobalRotator(const FRotator& _rotator, const FVector& _vLocal);
    
    UFUNCTION(BlueprintPure)
    static FVector GetLocalToGlobal(const FQuat& _qBase, const FVector& _vLocal);
    
    UFUNCTION(BlueprintPure)
    static void GetLocalLookAtYaw(const FVector& _fLookAtDirection, const float& _fRefBoneYawInDegrees, float _fMaxAngleInDegrees, bool _bAlwaysLookAt, float& _fOutLocalYaw, bool& _bOutIsLookAtValid);
    
    UFUNCTION(BlueprintPure)
    static FVector GetGlobalToLocalRotator(const FRotator& _rotator, const FVector& _vGlobal);
    
    UFUNCTION(BlueprintPure)
    static FVector GetGlobalToLocal(const FQuat& _qBase, const FVector& _vGlobal);
    
    UFUNCTION(BlueprintPure)
    static float GetDiffAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay);
    
    UFUNCTION(BlueprintPure)
    static float GetDestinationAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay, int32 _iExtra2Pi);
    
    UFUNCTION(BlueprintPure)
    static float GetBlendAngleForceWay(float _fSource, float _fDest, float _fBlendCoef, ESCRotationWay _eBlendWay, int32 _iExtra2Pi);
    
    UFUNCTION(BlueprintPure)
    static float GetBlendAngle(float _fSource, float _fDest, float _fBlendCoef);
    
    UFUNCTION(BlueprintPure)
    static float GetAngleNegPiToPi(float _fAngle);
    
    UFUNCTION(BlueprintPure)
    static ESCRotationWay GetAngleBlendWay(float _fSource, float _fDest);
    
    UFUNCTION(BlueprintPure)
    static float GetAngle2Pi(float _fAngle);
    
    UFUNCTION(BlueprintCallable)
    static float FloatCriticalSpringInterp(float _fCurrent, const float& _fTarget, UPARAM(Ref) float& _fInOutVelocity, float _fSpeedFactor, float _fDeltaTime);
    
    UFUNCTION(BlueprintPure)
    static float Cursorized(float _fValue, float _fLeftMargin, float _fRightMargin, bool _bClamp);
    
    UFUNCTION(BlueprintPure)
    static ESCCardinalPoints ComputeCardinalPointWithCustomAngles(const FVector& _vRefDir, const FVector& _vOtherVector, float _fNorthAngleDeg, float _fSouthAngleDeg);
    
    UFUNCTION(BlueprintPure)
    static ESCCardinalPoints ComputeCardinalPointEastWest(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintPure)
    static ESCCardinalPoints ComputeCardinalPoint(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintPure)
    static float ComputeBlendRatio(float _fRatio, ESCBlendType _eBlendType, UCurveFloat* _blendCurve);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetSplineRatioFromLocation(const FVector& _vLocation, const USplineComponent* _spline, float _fRangeMin, float _fRangeMax);
    
    UFUNCTION(BlueprintPure)
    static float AngleBetweenVectorHorizontal(FVector _v1Normalized, FVector _v2Normalized);
    
    UFUNCTION(BlueprintPure)
    static float AngleBetweenVectorAbsolute(FVector _v1Normalized, FVector _v2Normalized, FVector _vAxisNormalized);
    
    UFUNCTION(BlueprintPure)
    static void AngleBetweenVector(float& _fHorizontalAngle, float& _fVerticalAngle, FVector _v1Normalized, FVector _v2Normalized);
    
    USCMathTools();
};

