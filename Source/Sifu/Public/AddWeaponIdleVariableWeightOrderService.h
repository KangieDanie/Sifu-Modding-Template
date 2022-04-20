#pragma once
#include "CoreMinimal.h"
#include "AddVariableWeightOrderService.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "AddWeaponIdleVariableWeightOrderService.generated.h"

class UBaseWeaponData;
class UBlendProfile;

UCLASS(EditInlineNew)
class SIFU_API UAddWeaponIdleVariableWeightOrderService : public UAddVariableWeightOrderService {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    FSCUserDefinedEnumHandler BPE_GetEnumLayerForWeapon(const UBaseWeaponData* _weaponData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UBlendProfile* BPE_GetBlendProfileForWeapon(const UBaseWeaponData* _weaponData) const;
    
    UAddWeaponIdleVariableWeightOrderService();
};

