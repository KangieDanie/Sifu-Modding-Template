#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "AttachWeapon_Notify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UAttachWeapon_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_sBoneToAttachWeaponTo;
    
    UPROPERTY(EditAnywhere)
    bool m_bFakie;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsEndReattachment;
    
    UPROPERTY(EditAnywhere)
    bool m_bAttachInFakieIfCancelledFromThisNotify;
    
    UAttachWeapon_Notify();
};

