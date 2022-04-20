#pragma once
#include "CoreMinimal.h"
#include "CardinalAnimContainer.h"
#include "JiggleAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FJiggleAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCardinalAnimContainer m_JiggleAnimations;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowWeapons;
    
    SIFU_API FJiggleAnimContainer();
};

