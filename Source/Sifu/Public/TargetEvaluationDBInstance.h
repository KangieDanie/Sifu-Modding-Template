#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TargetEvaluationDBInstance.generated.h"

class UBaseTargetEvaluation;

USTRUCT()
struct SIFU_API FTargetEvaluationDBInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBaseTargetEvaluation> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBaseTargetEvaluation* m_Instance;
    
    FTargetEvaluationDBInstance();
};

