#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceNode.h"
#include "AIInfluence_TestSequence.generated.h"

class UAIInfluenceTest;

UCLASS()
class SIFU_API UAIInfluence_TestSequence : public UAIInfluenceNode {
    GENERATED_BODY()
public:
    /*UPROPERTY()
    TArray<UAIInfluenceTest*> m_Tests;*/
    
    UPROPERTY(EditAnywhere)
    float m_fProbability;
    
    UAIInfluence_TestSequence();
};

