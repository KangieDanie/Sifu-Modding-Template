#pragma once
#include "CoreMinimal.h"
#include "CombatDeckStat.h"
#include "EquipmentCategoryInfos.h"
#include "AsyncTextureStruct.h"
#include "CombatDeckDetails.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SIFU_API FCombatDeckDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_TotalDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_StatsDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_WeaponDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_WeaponDamageScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_BaseAttackDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_AttackBonus;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_Range;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_StrengthScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_AgilityScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCombatDeckStat m_WRScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSoftObjectPtr<UTexture2D> m_eWeaponFamilyMiniIcon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAsyncTextureStruct m_eWeaponFamilyMiniIconAsync;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FEquipmentCategoryInfos m_WeaponFamilyInfos;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_ComboName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FName> m_Attacks;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fTotatDamageWithCoef;
    
    FCombatDeckDetails();
};

