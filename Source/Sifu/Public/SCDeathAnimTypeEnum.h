#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "SCDeathAnimTypeEnum.generated.h"

USTRUCT(BlueprintType)
struct FSCDeathAnimTypeEnum : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:


    friend uint32 GetTypeHash(const FSCDeathAnimTypeEnum& Other) {
        return GetTypeHash(Other.m_Enum);
    }
    SIFU_API FSCDeathAnimTypeEnum();
};

