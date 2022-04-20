#pragma once
#include "CoreMinimal.h"
#include "BaseStatBindings.h"
#include "IntStatBinding.generated.h"

USTRUCT(BlueprintType)
struct FIntStatBinding : public FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_iValue;
    
    SIFU_API FIntStatBinding();
};

