#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceDirectionContainer.h"
#include "reeMoveAnimQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FreeMoveAnimQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpace;
    
    SIFU_API FreeMoveAnimQuadrant();
};

