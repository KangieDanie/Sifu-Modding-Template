#pragma once
#include "CoreMinimal.h"
#include "SaveInputAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FSaveInputAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName m_Key;
    
    UPROPERTY(SaveGame)
    float m_fScale;
    
    SIFU_API FSaveInputAxisKeyMapping();
};

