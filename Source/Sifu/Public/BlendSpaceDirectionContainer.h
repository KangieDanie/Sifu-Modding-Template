#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceContainer.h"
#include "BlendSpaceDirectionContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FBlendSpaceDirectionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlendSpaceContainer m_BlendSpaceFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlendSpaceContainer m_BlendSpaceBack;
    
    FBlendSpaceDirectionContainer();
};

