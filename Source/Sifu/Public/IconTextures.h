#pragma once
#include "CoreMinimal.h"
#include "IconTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIconTextures {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* m_Textures[2];
    
    SIFU_API FIconTextures();
};

