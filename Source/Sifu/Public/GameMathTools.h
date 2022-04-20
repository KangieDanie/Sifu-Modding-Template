#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCMathTools
#include "SCMathTools.h"
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: SCCore ESCRotationWay
#include "ESCRotationWay.h"
#include "GameMathTools.generated.h"

class AActor;
class AFightingCharacter;

UCLASS()
class SIFU_API UGameMathTools : public USCMathTools {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static EQuadrantTypes GetQuadrantTowardTarget(AFightingCharacter* _originChar, AActor* _target);
    
    UFUNCTION(BlueprintCallable)
    static EQuadrantTypes GetQuadrantFromStick(const FVector2D& _vStick);
    
    UFUNCTION(BlueprintCallable)
    static ESCRotationWay GetBaseHipsRotationWayFromQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant);
    
    UFUNCTION(BlueprintCallable)
    static float GetBaseHipsAngleFromQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBaseFakePelvisDirection(EQuadrantTypes _eQuadrant, FVector _vRefDir);
    
    UFUNCTION(BlueprintPure)
    static void GetAnimQuadrantAndMirror(EQuadrantTypes _eActorQuadrant, EQuadrantTypes _eActionQuadrant, bool& _bOutAnimMirror, EQuadrantTypes& _outAnimQuadrant);
    
    UFUNCTION(BlueprintCallable)
    static EQuadrantTypes ComputeQuadrantFromDirectionVectors(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintCallable)
    static ESCRotationWay ComputeBlendWay(const EQuadrantTypes _eStartQuadrant, const EQuadrantTypes _eEndQuadrant, const float _fStartAngle, const float _fEndAngle);
    
    UGameMathTools();
};

