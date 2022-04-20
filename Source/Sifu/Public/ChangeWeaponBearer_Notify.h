#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "EWeaponOrientationConstraint.h"
#include "ChangeWeaponBearer_Notify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UChangeWeaponBearer_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_sBoneToAttachWeaponTo;
    
    UPROPERTY(EditAnywhere)
    EWeaponOrientationConstraint m_eWeaponConstraint;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepAttachedOnImpostor;
    
    UPROPERTY(EditAnywhere)
    FName m_sBoneToAttachWeaponToOnImpostor;
    
    UChangeWeaponBearer_Notify();
};

