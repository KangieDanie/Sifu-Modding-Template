#pragma once
#include "CoreMinimal.h"
#include "ESchoolItemType.h"
#include "EquipmentStruct.generated.h"

class ABaseWeapon;
class UBaseItemData;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct SIFU_API FEquipmentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ABaseWeapon* m_EquipmentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UBaseItemData* m_EquipmentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 m_iMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ESchoolItemType m_eSchoolItemType;
    
    UPROPERTY(Transient)
    UMaterialInterface* m_BaseFXMaterials[10];
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> m_VariationChosenMaterials;
    
    FEquipmentStruct();
};

