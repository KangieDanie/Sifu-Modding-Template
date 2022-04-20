#pragma once
#include "CoreMinimal.h"
#include "BaseStatBindings.h"
#include "FloatStatBinding.generated.h"

USTRUCT(BlueprintType)
struct FFloatStatBinding : public FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fValue;
    
    SIFU_API FFloatStatBinding();
};

