#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ESCMathCondition
#include "ESCMathCondition.h"
//#include "EvaluateTargetCondition.h"
#include "TC_Distance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTC_Distance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESCMathCondition m_eCondition;
    
    UPROPERTY(EditAnywhere)
    float m_fDistance;
    
    UTC_Distance();
};

