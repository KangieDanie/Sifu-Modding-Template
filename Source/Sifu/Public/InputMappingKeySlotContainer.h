#pragma once
#include "CoreMinimal.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingKeySlot.h"
#include "SaveGameInputMappingKeySlot.h"
#include "InputMappingKeySlotContainer.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingKeySlotContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    UGenericInputData* m_SubInputData;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FInputMappingKeySlot m_Key;
    
protected:
    UPROPERTY(SaveGame)
    FSaveGameInputMappingKeySlot m_SaveGameKey;
    
public:
    SIFU_API FInputMappingKeySlotContainer();
};

