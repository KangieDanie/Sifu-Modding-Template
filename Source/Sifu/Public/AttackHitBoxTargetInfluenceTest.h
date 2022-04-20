#pragma once
#include "CoreMinimal.h"
#include "EAttackTarget.h"
#include "AIInfluenceTest.h"
#include "AttackHitBoxTargetInfluenceTest.generated.h"

UCLASS()
class SIFU_API UAttackHitBoxTargetInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EAttackTarget m_eHitTarget;
    
public:
    UAttackHitBoxTargetInfluenceTest();
};

