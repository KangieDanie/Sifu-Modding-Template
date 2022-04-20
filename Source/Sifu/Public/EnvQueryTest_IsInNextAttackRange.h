#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_IsInNextAttackRange.generated.h"

class UEnvQueryContext;

UCLASS()
class SIFU_API UEnvQueryTest_IsInNextAttackRange : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_Target;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTolerance;
    
public:
    UEnvQueryTest_IsInNextAttackRange();
};

