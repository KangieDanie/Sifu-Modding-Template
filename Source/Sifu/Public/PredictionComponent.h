#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "PredictionComponent.generated.h"

UCLASS()
class SIFU_API UPredictionComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bLocalPredictionOnly;
    
    UPredictionComponent();
    
    // Fix for true pure virtual functions not being implemented
};

