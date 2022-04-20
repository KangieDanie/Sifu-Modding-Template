#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "PivotFootData.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UPivotFootData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_MinSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DurationCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DecelAccelRatioCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AccelCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DecelCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_OrientationCurve;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_TurnAllowanceOnAccelRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_TransitionAllowanceOnAccelRange;
    
    UPivotFootData();
};

