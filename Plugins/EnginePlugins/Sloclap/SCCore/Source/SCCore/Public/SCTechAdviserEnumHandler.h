#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCTechAdviserEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCTechAdviserEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    FSCTechAdviserEnumHandler(){};
};

