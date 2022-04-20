#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "HaveCloseEnemiesCondition.generated.h"

UCLASS()
class SIFU_API UHaveCloseEnemiesCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bTestMaxDist;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDist;
    
    UHaveCloseEnemiesCondition();
};

