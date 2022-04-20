#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_HasComponent.generated.h"

class UActorComponent;

UCLASS()
class SIFU_API UEnvQueryTest_HasComponent : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UActorComponent> m_ComponentClass;
    
public:
    UEnvQueryTest_HasComponent();
};

