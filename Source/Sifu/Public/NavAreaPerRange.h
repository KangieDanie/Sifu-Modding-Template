#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "NavAreaPerRange.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FNavAreaPerRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_Range;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> m_associatedArea;
    
    SIFU_API FNavAreaPerRange();
};

