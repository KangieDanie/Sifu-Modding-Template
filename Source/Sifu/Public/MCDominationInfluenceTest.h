#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "MCDominationInfluenceTest.generated.h"

UCLASS()
class SIFU_API UMCDominationInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_uiMCDominationFlags;
    
    UMCDominationInfluenceTest();
};

