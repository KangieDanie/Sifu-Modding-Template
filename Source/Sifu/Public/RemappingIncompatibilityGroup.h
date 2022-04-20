#pragma once
#include "CoreMinimal.h"
#include "RemappingIncompatibilityGroup.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FRemappingIncompatibilityGroup {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bDetectChildCollisions;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;
    
    FRemappingIncompatibilityGroup();
};

