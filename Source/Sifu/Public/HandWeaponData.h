#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponData.h"
#include "HandWeaponData.generated.h"

UCLASS()
class SIFU_API UHandWeaponData : public UBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fHandRadius;
    
    UHandWeaponData();
};

