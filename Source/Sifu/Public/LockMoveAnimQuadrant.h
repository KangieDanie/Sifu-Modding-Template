#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "BlendSpaceDirectionContainer.h"
#include "LockMoveAnimQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FLockMoveAnimQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_LockMoveAnimContainer[4];
    
    UPROPERTY(EditAnywhere)
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    
    SIFU_API FLockMoveAnimQuadrant();
};

