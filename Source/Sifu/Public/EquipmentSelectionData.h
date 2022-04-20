#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EquipmentSelectionData.generated.h"

class UBaseWeaponData;
class USkeletalMesh;

UCLASS()
class SIFU_API UEquipmentSelectionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 m_EquipmentMaterials[9];
    
    UPROPERTY(EditAnywhere)
    UBaseWeaponData* m_Weapon;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_CharacterMesh;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiSkinToneIndex;
    
    UEquipmentSelectionData();
};

