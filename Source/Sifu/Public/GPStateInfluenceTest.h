#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EAIGameplayStates.h"
#include "GPStateInfluenceTest.generated.h"

UCLASS()
class SIFU_API UGPStateInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EAIGameplayStates m_eState;
    
    UGPStateInfluenceTest();
};

