#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "QuadrantAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[4];
    
    SIFU_API FQuadrantAnimContainer();
};

