#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialInput.generated.h"

USTRUCT(BlueprintType)
struct FDynamicMaterialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ParameterToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fValue;
    
    SIFU_API FDynamicMaterialInput();
};

