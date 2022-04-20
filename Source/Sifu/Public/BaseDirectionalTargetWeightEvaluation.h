#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BaseDirectionalTargetWeightEvaluation.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UBaseDirectionalTargetWeightEvaluation : public UObject {
    GENERATED_BODY()
public:
    UBaseDirectionalTargetWeightEvaluation();
};

