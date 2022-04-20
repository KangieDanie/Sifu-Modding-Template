#pragma once
#include "CoreMinimal.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingKeySlotContainer.h"
#include "InputMappingData.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UGenericInputData* m_InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FInputMappingKeySlotContainer> m_Slots;
    
    friend uint32 GetTypeHash(const FInputMappingData& Other) {
        return GetTypeHash(Other.m_PresetID);
    }

    SIFU_API FInputMappingData();
};

