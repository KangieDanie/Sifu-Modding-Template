#pragma once
#include "CoreMinimal.h"
#include "EVirtualAction.h"
#include "SaveInputAxisKeyMapping.h"
#include "SaveGameInputMappingKeySlot.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameInputMappingKeySlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EVirtualAction m_eVirtualAction;
    
    UPROPERTY(SaveGame)
    TArray<FName> m_Actions;
    
    UPROPERTY(SaveGame)
    TArray<FSaveInputAxisKeyMapping> m_Axis;
    
    SIFU_API FSaveGameInputMappingKeySlot();
};

