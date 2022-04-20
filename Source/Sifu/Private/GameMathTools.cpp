#include "GameMathTools.h"

class AActor;
class AFightingCharacter;

EQuadrantTypes UGameMathTools::GetQuadrantTowardTarget(AFightingCharacter* _originChar, AActor* _target) {
    return EQuadrantTypes::FrontLeft;
}

EQuadrantTypes UGameMathTools::GetQuadrantFromStick(const FVector2D& _vStick) {
    return EQuadrantTypes::FrontLeft;
}

ESCRotationWay UGameMathTools::GetBaseHipsRotationWayFromQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant) {
    return ESCRotationWay::ClockWise;
}

float UGameMathTools::GetBaseHipsAngleFromQuadrant(EQuadrantTypes _eQuadrant) {
    return 0.0f;
}

FVector UGameMathTools::GetBaseFakePelvisDirection(EQuadrantTypes _eQuadrant, FVector _vRefDir) {
    return FVector{};
}

void UGameMathTools::GetAnimQuadrantAndMirror(EQuadrantTypes _eActorQuadrant, EQuadrantTypes _eActionQuadrant, bool& _bOutAnimMirror, EQuadrantTypes& _outAnimQuadrant) {
}

EQuadrantTypes UGameMathTools::ComputeQuadrantFromDirectionVectors(const FVector& _vRefDir, const FVector& _vOtherVector) {
    return EQuadrantTypes::FrontLeft;
}

ESCRotationWay UGameMathTools::ComputeBlendWay(const EQuadrantTypes _eStartQuadrant, const EQuadrantTypes _eEndQuadrant, const float _fStartAngle, const float _fEndAngle) {
    return ESCRotationWay::ClockWise;
}

UGameMathTools::UGameMathTools() {
}

