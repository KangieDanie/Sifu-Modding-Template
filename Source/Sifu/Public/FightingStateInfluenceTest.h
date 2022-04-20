#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EFightingState.h"
#include "FightingStateInfluenceTest.generated.h"

UCLASS()
class SIFU_API UFightingStateInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EFightingState m_eFightingState;
    
public:
    UFightingStateInfluenceTest();
};

