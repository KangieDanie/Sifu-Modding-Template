#pragma once
#include "CoreMinimal.h"
#include "UOrderParamsInstanceStruct.generated.h"

class UOrderParams;

USTRUCT(BlueprintType)
struct SIFU_API FUOrderParamsInstanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UOrderParams* m_Instance;
    
    FUOrderParamsInstanceStruct();
};

