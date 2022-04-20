#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "HeightDifferenceWithActorCondition.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UHeightDifferenceWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_HeightDiffCurve;
    
    UHeightDifferenceWithActorCondition();
};

