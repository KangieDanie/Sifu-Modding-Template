#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "StaminaNotify.generated.h"

UCLASS(Abstract, CollapseCategories)
class SIFU_API UStaminaNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UStaminaNotify();
};

