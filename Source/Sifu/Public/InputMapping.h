#pragma once
#include "CoreMinimal.h"
#include "InputMappingData.h"
#include "InputMapping.generated.h"

USTRUCT(BlueprintType)
struct FInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FInputMappingData m_MappingData;
    

    friend uint32 GetTypeHash(const FInputMapping& Other) {
        return GetTypeHash(Other.m_MappingData);
    }

    SIFU_API FInputMapping();
};

