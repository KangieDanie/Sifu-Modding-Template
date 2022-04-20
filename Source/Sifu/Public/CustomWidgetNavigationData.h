#pragma once
#include "CoreMinimal.h"
#include "CustomWidgetNavigationData.generated.h"

USTRUCT(BlueprintType)
struct FCustomWidgetNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bAnalogNavigation;
    
    SIFU_API FCustomWidgetNavigationData();
};

