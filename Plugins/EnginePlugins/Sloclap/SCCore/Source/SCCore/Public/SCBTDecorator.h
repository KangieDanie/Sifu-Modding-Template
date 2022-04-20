#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SCBTDecorator.generated.h"

UCLASS(Abstract)
class SCCORE_API USCBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bEvaluateConditionOnTick;
    
    USCBTDecorator();
};

