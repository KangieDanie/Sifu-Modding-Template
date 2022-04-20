#pragma once
#include "CoreMinimal.h"
#include "SCPoseAssetSelection.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "SCAnimPoseLooped.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SCCORE_API FSCAnimPoseLooped {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCPoseAssetSelection m_Pose;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeightCurve;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_RandomDelay;
    
    FSCAnimPoseLooped(){};
};

