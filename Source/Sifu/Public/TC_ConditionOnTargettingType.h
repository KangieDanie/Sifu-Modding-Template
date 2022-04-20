#pragma once
#include "CoreMinimal.h"
//#include "EvaluateTargetCondition.h"
#include "ETargetingPrio.h"
#include "TC_ConditionOnTargettingType.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTC_ConditionOnTargettingType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETargetingPrio m_eTargettingType;
    
    UPROPERTY(EditAnywhere)
    bool m_bDefaultValue;
    
   /* UPROPERTY(EditAnywhere, Instanced)
    UEvaluateTargetCondition* m_condition;*/
    
    UTC_ConditionOnTargettingType();
};

