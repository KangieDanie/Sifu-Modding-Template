#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_TargettingQueryer.generated.h"

class UEnvQueryContext;

UCLASS()
class SIFU_API UEnvQueryTest_TargettingQueryer : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_TargetTo;
    
public:
    UEnvQueryTest_TargettingQueryer();
};

