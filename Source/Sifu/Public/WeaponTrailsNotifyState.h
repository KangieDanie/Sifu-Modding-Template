#pragma once
#include "CoreMinimal.h"
#include "TrailNotifyStateExtended.h"
#include "EWeaponSlot.h"
#include "WeaponTrailsNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UWeaponTrailsNotifyState : public UTrailNotifyStateExtended {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EWeaponSlot m_eWeaponSlot;
    
public:
    UWeaponTrailsNotifyState();
};

