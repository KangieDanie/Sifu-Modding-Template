#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamagedWeaponInfo.generated.h"

class UBaseWeaponData;
class UWeaponGameplayData;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FDamagedWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBaseWeaponData> m_WeaponDataToApplyOnBrokenWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeaponGameplayData> m_WeaponGameplayDataToApplyOnBrokenWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDamagedWeaponHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* m_StateSkeletalMesh;
    
    SIFU_API FDamagedWeaponInfo();
};

