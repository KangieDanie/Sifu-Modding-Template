#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_Targetable.generated.h"

class UEnvQueryContext;

UCLASS()
class SIFU_API UEnvQueryTest_Targetable : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_TargetTo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetRange;
    
public:
    UEnvQueryTest_Targetable();
};

