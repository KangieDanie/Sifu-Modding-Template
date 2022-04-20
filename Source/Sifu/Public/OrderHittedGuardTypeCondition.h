#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "EGuardType.h"
#include "OrderHittedGuardTypeCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UOrderHittedGuardTypeCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bCheckWasGuarded;
    
    UPROPERTY(EditAnywhere)
    bool m_bWasGuarded;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckGuardBreak;
    
    UPROPERTY(EditAnywhere)
    bool m_bWasGuardBroken;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckGuardType;
    
    UPROPERTY(EditAnywhere)
    EGuardType m_eGuardType;
    
    UOrderHittedGuardTypeCondition();
};

