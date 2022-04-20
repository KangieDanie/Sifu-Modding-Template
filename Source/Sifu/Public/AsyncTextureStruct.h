#pragma once
#include "CoreMinimal.h"
#include "AsyncTextureStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SIFU_API FAsyncTextureStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;
    
    FAsyncTextureStruct();
};

