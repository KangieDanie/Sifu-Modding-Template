#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ETargetingPrio.h"
#include "BaseTargetEvaluation.generated.h"

class UCurveFloat;

UCLASS(Abstract)
class SIFU_API UBaseTargetEvaluation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
protected:
    UPROPERTY(EditAnywhere)
    ETargetingPrio m_eTargettingType;
    
public:
    UBaseTargetEvaluation();
};

