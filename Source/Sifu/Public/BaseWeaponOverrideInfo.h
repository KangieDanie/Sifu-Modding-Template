#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWeaponOverrideInfo.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FBaseWeaponOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fLifeDamageModiferOnGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fStructureDamageModifierOnGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> m_GrantedEffects;
    
    SIFU_API FBaseWeaponOverrideInfo();
};

