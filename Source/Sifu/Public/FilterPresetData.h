#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PostProcessSettings
#include "FilterPresetData.generated.h"

USTRUCT(BlueprintType)
struct FFilterPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPostProcessSettings m_PostProcessSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_DisplayText;
    
    SIFU_API FFilterPresetData();
};

