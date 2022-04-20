#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "SCAITicketEnum.generated.h"

USTRUCT(BlueprintType)
struct FSCAITicketEnum : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:

    friend uint32 GetTypeHash(const FSCAITicketEnum& Other) {
        return GetTypeHash(Other.m_Enum);
    }

    SIFU_API FSCAITicketEnum();
};

