#pragma once
#include "CoreMinimal.h"
#include "SpecialAbilityPropertyDB.h"
#include "EAbsorbFeedbackTypes.h"
#include "AbsorbPropertyDB.generated.h"

UCLASS()
class SIFU_API UAbsorbPropertyDB : public USpecialAbilityPropertyDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_uiAbsorbStackNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAbsorbIsDeathDodger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iAbsorbFreezeframeNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bResistsInterruptAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bResistsGuardBreakAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bFromSpecialAbility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAbsorbFeedbackTypes m_eAbsorbFeedbackType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bGhostDamageActivated;
    
    UAbsorbPropertyDB();
};

