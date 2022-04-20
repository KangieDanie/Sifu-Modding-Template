#pragma once
#include "CoreMinimal.h"
#include "RemappingClasses.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FRemappingClasses {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;
    
    FRemappingClasses();
};

