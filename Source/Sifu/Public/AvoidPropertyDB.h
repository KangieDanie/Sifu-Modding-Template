#pragma once
#include "CoreMinimal.h"
#include "SpecialAbilityPropertyDB.h"
#include "EAvoidFeedbackTypes.h"
#include "AvoidPropertyDB.generated.h"

class UCurveFloat;
class UAvoidPropertyDB;

UCLASS()
class SIFU_API UAvoidPropertyDB : public USpecialAbilityPropertyDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAvoidedDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_AvoidedAttackScaleCurves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAvoidFeedbackTypes m_eAvoidFeedbackTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAvoidedEnterDizzyOnAttacked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvoidPropertyDB* m_AvoidDBOnDizzyAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bShouldEndCombo;
    
    UAvoidPropertyDB();
};

