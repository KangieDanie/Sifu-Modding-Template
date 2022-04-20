#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETestAxis2D.h"
#include "EGetActorsRelativeSideToBox.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_ActorsRelativeSideToBox.generated.h"

class UEnvQueryContext;

UCLASS()
class SIFU_API UEnvQueryTest_ActorsRelativeSideToBox : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EGetActorsRelativeSideToBox m_eTest;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDistanceToBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_ActorA;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_ActorB;
    
    UPROPERTY(EditDefaultsOnly)
    ETestAxis2D m_eTestAxis;
    
public:
    UEnvQueryTest_ActorsRelativeSideToBox();
};

