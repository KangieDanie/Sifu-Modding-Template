#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Styling/SlateColor.h"
#include "BaseStatBindings.generated.h"

USTRUCT(BlueprintType)
struct FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_Text;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSlateColor m_ComparisonColor;
    
    SIFU_API FBaseStatBindings();
};

