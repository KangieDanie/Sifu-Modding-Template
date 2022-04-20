#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SCFloatRange.h"
#include "SCInt32Range.h"
#include "StatsDB.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class SIFU_API UStatsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iRestatCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iChangeSchoolCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fFightingStyleStatScaleCoef;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FightingStyleStatScaleBonusCurves[6];
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_StatScaleBonusCurves[6];
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_MaxStatDamageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_WRScaleBonusCurves[6];
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_MaxWRDamageCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMinSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxDamageBonus;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSCInt32Range m_MaxWeightStatLevelRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSCFloatRange m_MaxWeightAtLevelRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iMaxLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iStatBonusMaxLevel;
    
    UPROPERTY(EditAnywhere)
    float m_WeightCategoryThresholds[4];
    
    UPROPERTY(EditAnywhere)
    float m_fXPGainRatioForAssist;
    
    UPROPERTY(EditAnywhere)
    float m_fXPGainRatioForKillingBlow;
    
    UPROPERTY(EditAnywhere)
    int32 m_iXPGainThresholdForKillingBlow;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_StrengthAverageCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AgilityAverageCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeightRatioAverageCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeaponDamageAverageCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AttackBonusCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_GearAttackBonusScaleCurves[6];
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iBonusXPWhenPendantIsFull;
    
    UStatsDB();
};

