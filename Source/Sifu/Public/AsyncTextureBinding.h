#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG PropertyBinding
#include "AsyncTextureStruct.h"
#include "AsyncTextureBinding.generated.h"

UCLASS()
class SIFU_API UAsyncTextureBinding : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION()
    FAsyncTextureStruct GetValue() const;
    
    UAsyncTextureBinding();
};

