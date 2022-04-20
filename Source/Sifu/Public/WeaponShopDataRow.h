#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "WeaponShopDataRow.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct SIFU_API FWeaponShopDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseItemData* m_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iGMLevelRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iGleamLevelRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iFragmentPrice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iPrestigePointPrice;
    
    FWeaponShopDataRow();
};

