#pragma once
#include "CoreMinimal.h"
#include "ETransitionRotation.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "RotationAnimContainer.h"
#include "SpeedStateAnimContainer.h"
#include "EQuadrantTypes.h"
#include "ESpeedState.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "QuadrantAnimContainer.h"
#include "OrientedRotationAnimContainer.h"
#include "CardinalAnimContainer.h"
#include "CardinalChangementAnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "AnimContainerLibrary.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAnimContainerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static void GetSpeedStateAnim(const FSpeedStateAnimContainer& _animContainer, ESpeedState _eSpeedState, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetRotationAnim(const FRotationAnimContainer& _animContainer, ETransitionRotation _eTransitionRotation, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetQuadrantAnim(const FQuadrantAnimContainer& _animContainer, EQuadrantTypes _eQuadrant, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetOrientedRotationAnim(const FOrientedRotationAnimContainer& _animContainer, ETransitionRotation _eTransitionRotation, bool _bIsLeft, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetCardinalChangementAnim(const FCardinalChangementAnimContainer& _animContainer, ESCCardinalPoints _eInCardinal, ESCCardinalPoints _eOutCardinal, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetCardinalAnim(const FCardinalAnimContainer& _animContainer, ESCCardinalPoints _eCardinal, FAnimContainer& _result);
    
    UAnimContainerLibrary();
};

