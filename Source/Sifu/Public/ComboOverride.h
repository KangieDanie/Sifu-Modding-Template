#pragma once
#include "CoreMinimal.h"
#include "ComboOverride.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct FComboOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_DifficultyName;
    
    UPROPERTY(EditAnywhere)
    UCombo* m_ComboOverride;
    
    SIFU_API FComboOverride();
};

