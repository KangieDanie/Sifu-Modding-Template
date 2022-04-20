#pragma once
#include "CoreMinimal.h"
#include "EMappingValidationErrorType.h"
#include "MappingID.h"
#include "MappingValidationError.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FMappingValidationError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EMappingValidationErrorType m_eResult;
    
    UPROPERTY(BlueprintReadOnly)
    FMappingID m_ID;
    
    UPROPERTY(BlueprintReadOnly)
    FMappingID m_CollideID;
    
    UPROPERTY(BlueprintReadOnly)
    UGenericInputData* m_CollideWithData;
    
    SIFU_API FMappingValidationError();
};

