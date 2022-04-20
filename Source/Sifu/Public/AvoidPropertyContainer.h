#pragma once
#include "CoreMinimal.h"
#include "AvoidPropertyContainer.generated.h"

class UAvoidPropertyDB;

USTRUCT(BlueprintType)
struct SIFU_API FAvoidPropertyContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAvoidPropertyDB* m_AvoidPropertyDB[7];
    
    FAvoidPropertyContainer();
};

