#pragma once
#include "CoreMinimal.h"
#include "WeaponOverrideInfo.h"
#include "AIWeaponInfo.generated.h"

class UWeaponInfoForAIDataAsset;

USTRUCT(BlueprintType)
struct FAIWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWeaponInfoForAIDataAsset* m_WeaponInfoForAI;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanFetch;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseThiWeaponAtStart;
    
    UPROPERTY(EditAnywhere)
    bool m_bWeaponShouldBreakWhenDropped;
    
    UPROPERTY(EditAnywhere)
    bool m_bWeaponShouldRegenerateAfterThrown;
    
    UPROPERTY(EditAnywhere)
    bool m_bWeaponCanTakeDamage;
    
    UPROPERTY(EditAnywhere)
    FWeaponOverrideInfo m_WeaponOverride;
    
    SIFU_API FAIWeaponInfo();
};

