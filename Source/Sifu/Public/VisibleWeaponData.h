#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponData.h"
#include "WeaponVisuals.h"
#include "VisibleWeaponData.generated.h"

UCLASS()
class SIFU_API UVisibleWeaponData : public UBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FWeaponVisuals> m_WeaponVisuals;
    
    UVisibleWeaponData();
};

