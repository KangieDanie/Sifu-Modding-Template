#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIActionAttackClassInstance.generated.h"

class UAIActionAttack;

USTRUCT()
struct SIFU_API FAIActionAttackClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionAttack> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UAIActionAttack* m_Instance;
    
    FAIActionAttackClassInstance();
};

