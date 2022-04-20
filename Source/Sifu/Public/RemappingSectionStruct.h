#pragma once
#include "CoreMinimal.h"
#include "MappableInputStruct.h"
#include "RemappingSectionStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FRemappingSectionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_SectionDisplayText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMappableInputStruct> m_RemappableActions;
    
    FRemappingSectionStruct();
};

