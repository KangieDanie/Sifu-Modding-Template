#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "AttackComboDB.h"
#include "AttacksComboDB.generated.h"

UCLASS()
class SIFU_API UAttacksComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackComboDB m_Struct;
    
    UAttacksComboDB();
};

