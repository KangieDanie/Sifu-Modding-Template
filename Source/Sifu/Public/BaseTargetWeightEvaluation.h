#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BaseTargetWeightEvaluation.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UBaseTargetWeightEvaluation : public UObject {
    GENERATED_BODY()
public:
    UBaseTargetWeightEvaluation();
};

