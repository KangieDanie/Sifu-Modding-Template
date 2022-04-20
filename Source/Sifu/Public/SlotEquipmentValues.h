#pragma once
#include "CoreMinimal.h"
#include "EGearRarity.h"
#include "EquipmentValues.h"
#include "SlotEquipmentValues.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSlotEquipmentValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGearRarity, FEquipmentValues> m_EquipmentsValues;
    
    FSlotEquipmentValues();
};

