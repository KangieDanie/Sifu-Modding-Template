#pragma once
#include "CoreMinimal.h"
#include "WeaponSituationDescription.generated.h"

class UVisibleWeaponData;

USTRUCT(BlueprintType)
struct FWeaponSituationDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    int32 m_iLevelMin;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iLevelMax;
    
    UPROPERTY(EditAnywhere)
    TArray<UVisibleWeaponData*> m_WeaponsData;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiAppearanceProbabilities;
    
    SIFU_API FWeaponSituationDescription();
};

