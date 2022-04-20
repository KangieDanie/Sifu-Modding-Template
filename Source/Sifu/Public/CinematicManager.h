#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CinematicManager.generated.h"

UCLASS()
class SIFU_API UCinematicManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fFadeDuration;
    
    UFUNCTION()
    void MovieStopped();
    
public:
    UCinematicManager();
};

