#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ComboAttack.h"
#include "AttackDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FComboAttack m_Attack;
    
    UPROPERTY()
    int32 m_iVersionNumber;
    
    UAttackDB();
};

