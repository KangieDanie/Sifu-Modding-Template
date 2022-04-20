#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "BPInfluenceTest.generated.h"

class UAIFightingComponent;

UCLASS(Abstract, Blueprintable)
class SIFU_API UBPInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText m_NodeName;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_RunBPTest(const UAIFightingComponent* _testedAI) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FText BPE_GetDescriptionDetails() const;
    
    UBPInfluenceTest();
};

