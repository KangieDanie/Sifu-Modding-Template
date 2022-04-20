#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "TargetForSlotsEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FTargetForSlotsEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FTargetForSlotsEnumHandler();
};

