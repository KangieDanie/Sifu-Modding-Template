#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
#include "AISanctuaryComponent.generated.h"

UCLASS()
class SIFU_API UAISanctuaryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInt32Range m_RangeNbOfEnnemies;
    
    UPROPERTY(EditAnywhere)
    bool m_bSanctuaryHasLimitedDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fSanctuaryDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bSendBarkEventWhenSanctuaryIsSafe;
    
public:
    UAISanctuaryComponent();
};

