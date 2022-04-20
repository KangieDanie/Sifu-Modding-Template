#pragma once
#include "CoreMinimal.h"
#include "CardinalAnimContainer.h"
#include "CardinalChangementAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCardinalChangementAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCardinalAnimContainer m_Cardinals[4];
    
    SIFU_API FCardinalChangementAnimContainer();
};

