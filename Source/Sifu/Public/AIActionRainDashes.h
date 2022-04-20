#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIActionAttack.h"
#include "AIActionRainDashes.generated.h"

class UAIActionDash;

UCLASS(Abstract)
class SIFU_API UAIActionRainDashes : public UAIActionAttack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinDistanceForFinalDash;
    
    UPROPERTY(EditAnywhere)
    int8 m_iMaxNumberOfDashes;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionDash> m_FirstDashLeft;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionDash> m_FirstDashRight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionDash> m_IntermediateDashLeft;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionDash> m_IntermediateDashRight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIActionDash> m_FinalDash;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnFinishDash();
    
public:
    UAIActionRainDashes();
};

