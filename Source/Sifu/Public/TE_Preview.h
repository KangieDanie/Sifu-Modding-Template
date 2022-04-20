#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_Preview.generated.h"

UCLASS(Abstract)
class SIFU_API UTE_Preview : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fCameraTargetDirectionCoeff;
    
    UTE_Preview();
};

