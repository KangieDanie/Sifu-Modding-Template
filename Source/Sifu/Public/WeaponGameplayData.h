#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MainCharWeaponOverrideInfo.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "WeaponGameplayData.generated.h"

class UTargetSettingsDB;
class UCurveFloat;
class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UWeaponGameplayData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTargetSettingsDB> m_throwFromPickUpTargetSettingsDB;
    
    UPROPERTY(EditAnywhere)
    float m_afDamageReceiveFromAttackPower[3];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_SlowMotionCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSlowMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMainCharWeaponOverrideInfo m_MainCharOverrides;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_WeaponDataRef();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_OnChangeCombo(AFightingCharacter* _owner, bool _bDroppingWeapon) const;
    
    UWeaponGameplayData();
};

