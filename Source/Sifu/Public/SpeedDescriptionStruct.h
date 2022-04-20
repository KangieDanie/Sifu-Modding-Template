#pragma once
#include "CoreMinimal.h"
#include "SpeedDescriptionStruct.generated.h"

USTRUCT(BlueprintType)
struct FSpeedDescriptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    float m_fBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    float m_fOverrAll;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fPlayRate;
    
    SIFU_API FSpeedDescriptionStruct();
};

