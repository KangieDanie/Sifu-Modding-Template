#pragma once
#include "CoreMinimal.h"
#include "WidgetPoolElement.h"
#include "WidgetPoolElementArray.generated.h"

USTRUCT(BlueprintType)
struct FWidgetPoolElementArray {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FWidgetPoolElement> m_Array;
    
    SIFU_API FWidgetPoolElementArray();
};

