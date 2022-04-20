#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponOverrideInfo.h"
#include "MainCharWeaponOverrideInfo.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct FMainCharWeaponOverrideInfo : public FBaseWeaponOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCombo* m_MainCharCombo;
    
    SIFU_API FMainCharWeaponOverrideInfo();
};

