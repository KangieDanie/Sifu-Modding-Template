#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "InputPresetsEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FInputPresetsEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    friend uint32 GetTypeHash(const FInputPresetsEnumHandler& Other) {
        return GetTypeHash(Other.m_Enum);
    }
    SIFU_API FInputPresetsEnumHandler();
};

