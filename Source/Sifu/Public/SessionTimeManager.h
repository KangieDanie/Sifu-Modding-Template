#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SessionTimeManager.generated.h"

UCLASS()
class SIFU_API USessionTimeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fDelayBetweenSync;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float m_fTimeSinceLastSync;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float m_fScaleTime;
    
public:
    USessionTimeManager();
};

