#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AbilityPayload.generated.h"

UCLASS(Abstract)
class SIFU_API UAbilityPayload : public UObject {
    GENERATED_BODY()
public:
    UAbilityPayload();
};

