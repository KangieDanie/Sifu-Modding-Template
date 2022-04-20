#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceNode.h"
#include "AIInfluenceTest.generated.h"

UCLASS(Abstract)
class SIFU_API UAIInfluenceTest : public UAIInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bInverted;
    
    UAIInfluenceTest();
};

