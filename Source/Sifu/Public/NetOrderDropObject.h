#pragma once
#include "CoreMinimal.h"
#include "EDropReason.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
#include "NetOrderDropObject.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderDropObject : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDropReason m_eDropReason;
    
    SIFU_API FNetOrderDropObject();
};

