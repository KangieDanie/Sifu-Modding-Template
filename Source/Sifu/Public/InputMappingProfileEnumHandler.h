#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "InputMappingProfileEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingProfileEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    friend uint32 GetTypeHash(const FInputMappingProfileEnumHandler& Other) {
        return GetTypeHash(Other.m_Enum);
    }

    SIFU_API FInputMappingProfileEnumHandler();
};

