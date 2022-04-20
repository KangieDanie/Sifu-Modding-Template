#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_Nearest.generated.h"

UCLASS()
class SIFU_API UTE_Nearest : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fOutOfSightTimer;
    
    UPROPERTY(EditAnywhere)
    float m_fAutoSelectTargetCooldown;
    
    UPROPERTY(EditAnywhere)
    bool m_bWantKeepPreviousTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bAutoResetBestTarget;
    
    UTE_Nearest();
};

