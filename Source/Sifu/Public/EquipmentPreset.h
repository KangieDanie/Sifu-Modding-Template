#pragma once
#include "CoreMinimal.h"
#include "EquipmentStruct.h"
#include "EquipmentPreset.generated.h"

USTRUCT()
struct SIFU_API FEquipmentPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FEquipmentStruct m_Items[9];
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 m_IsEmpty[9];
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_Init;
    
    FEquipmentPreset();
};

