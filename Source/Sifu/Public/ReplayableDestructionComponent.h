#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ReplayableDestructionComponent.generated.h"

UCLASS()
class SIFU_API UReplayableDestructionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastBreak();
    
    UReplayableDestructionComponent();
};

