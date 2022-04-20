#pragma once
#include "CoreMinimal.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingKeySlot.h"
#include "InputMappingNode.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_InputData;
    
    UPROPERTY(BlueprintReadOnly)
    FInputPresetsEnumHandler m_Preset;
    
    UPROPERTY(BlueprintReadOnly)
    FInputMappingKeySlot m_KeySlot;
    
    friend uint32 GetTypeHash(const FInputMappingNode& Other) {
        return GetTypeHash(Other.m_InputData);
    }

    SIFU_API FInputMappingNode();
};

