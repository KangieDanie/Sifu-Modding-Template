#pragma once
#include "CoreMinimal.h"
#include "ControllerAxisTypeIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SIFU_API FControllerAxisTypeIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_AxisTypeIcons[8];
    
    FControllerAxisTypeIcons();
};

