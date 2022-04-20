#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "SCFootIkService.h"
#include "SCFootIkPredictionByVelocity.generated.h"

UCLASS()
class SCCORE_API USCFootIkPredictionByVelocity : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatRange m_activationRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMinRequiredVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseLastGroundNormal;
    
public:
    USCFootIkPredictionByVelocity(){};
};

