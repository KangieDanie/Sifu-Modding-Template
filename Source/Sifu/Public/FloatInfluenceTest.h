#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EAIInfluenceTest.h"
#include "FloatInfluenceTest.generated.h"

UCLASS(Abstract)
class SIFU_API UFloatInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EAIInfluenceTest m_eTestType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fValueMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fValueMax;
    
    UFloatInfluenceTest();
};

