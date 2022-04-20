#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "TauntAbility.generated.h"

class URandomAnimDB;

UCLASS()
class SIFU_API UTauntAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URandomAnimDB* m_randomAnimDB;
    
public:
    UTauntAbility();
};

