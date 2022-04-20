#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceClassInstance.generated.h"

class UOrderService;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOrderService* m_Instance;
    
    FOrderServiceClassInstance();
};

