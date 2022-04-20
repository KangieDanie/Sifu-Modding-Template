#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "StealTargetWeapon_Notify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UStealTargetWeapon_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bMirrorPickup;
    
    UStealTargetWeapon_Notify();
};

