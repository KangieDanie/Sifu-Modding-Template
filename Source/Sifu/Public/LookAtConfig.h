#pragma once
#include "CoreMinimal.h"
#include "LookAtConfig.generated.h"

class ULookAtConfigData;

USTRUCT(BlueprintType)
struct FLookAtConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bCanHaveInteractionComponent;
    
    UPROPERTY(EditAnywhere)
    ULookAtConfigData* m_configData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float m_fValidDuration;
    
    SIFU_API FLookAtConfig();
};

