#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UOrderParamsClassInstance.generated.h"

class UOrderParams;

USTRUCT(BlueprintType)
struct SIFU_API FUOrderParamsClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderParams> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOrderParams* m_Instance;
    
    FUOrderParamsClassInstance();
};

