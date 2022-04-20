#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWeaponOverrideInfo.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EOrderType.h"
#include "ETargetingPrio.h"
#include "VariableWeightLayerToBoneMask.h"
#include "BaseWeaponData.generated.h"

class UThrowObjectAnimRequest;
class UCurveFloat;
class AFightingCharacter;
class ABaseWeapon;
class UPlayerAnim;

UCLASS(Blueprintable)
class SIFU_API UBaseWeaponData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_Socket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_OnWeaponSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EOrderType, bool> m_UseSwapHandByOrder;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bUseSwapHand;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bMirrorAllowed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAllowFakieFromAnimNotify;
    
    UPROPERTY(VisibleAnywhere)
    UCurveFloat* m_DesignatedTargetPreciseSearchWidthCurveForAttack;
    
    UPROPERTY(VisibleAnywhere)
    UCurveFloat* m_DesignatedTargetRoughSearchWidthCurveForAttack;
    
    UPROPERTY(VisibleAnywhere)
    TMap<ETargetingPrio, float> m_mfRangeMaxForAttack;
    
    UPROPERTY(VisibleAnywhere)
    float m_afDamageReceiveFromAttackPower[3];
    
    UPROPERTY(VisibleAnywhere)
    float m_afGuardTypeDamageMultiplier[3];
    
    UPROPERTY(VisibleAnywhere)
    UCurveFloat* m_SlowMotionCurve;
    
    UPROPERTY(VisibleAnywhere)
    float m_fSlowMotionScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UThrowObjectAnimRequest> m_ThrowFromPickupAnimRequest;
    
    UPROPERTY(VisibleAnywhere)
    FBaseWeaponOverrideInfo m_MainCharOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseSpecificMirrorPickupAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EOrderType, FVariableWeightLayerToBoneMask> m_variableWeightLayerByOrder;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_PrePickUpWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon, bool _bMirror) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_PreDropWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_OnUnequipWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_OnEquipWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon) const;
    
    UBaseWeaponData();
};

