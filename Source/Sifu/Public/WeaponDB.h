#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "WeaponDB.generated.h"

UCLASS()
class SIFU_API UWeaponDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fWeaponDurabilityRegenRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDurabilityDamageRateOnAbsorb;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDurabilityDamageRateOnParried;
    
    UWeaponDB();
};

