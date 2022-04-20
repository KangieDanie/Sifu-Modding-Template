#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCDataAdviserEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCDataAdviserEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    FSCDataAdviserEnumHandler(){};
};

