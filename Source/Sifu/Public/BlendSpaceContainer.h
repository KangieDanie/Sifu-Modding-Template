#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceContainer.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct SIFU_API FBlendSpaceContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* m_BlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bMirror;
    
    FBlendSpaceContainer();
};

