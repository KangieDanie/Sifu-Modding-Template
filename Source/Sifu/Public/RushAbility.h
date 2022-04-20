#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "ESpeedState.h"
#include "RushAbility.generated.h"

UCLASS()
class SIFU_API URushAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESpeedState eMinNeededSpeedState;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetGuard;
    
public:
    URushAbility();
};

