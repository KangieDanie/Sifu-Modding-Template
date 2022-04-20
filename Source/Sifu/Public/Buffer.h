#pragma once
#include "CoreMinimal.h"
#include "Buffer.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct SIFU_API FBuffer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> m_BufferArray;
    
    UPROPERTY()
    TArray<FName> m_BufferFnames;
    
    UPROPERTY()
    TArray<AActor*> m_BufferActors;
    
    UPROPERTY()
    TArray<UObject*> m_BufferUObjects;
    
    FBuffer();
};

