#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "V2BlockerComponent.generated.h"

class AActor;

UCLASS()
class SIFU_API UV2BlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnActorEndOverlap(AActor* _overlappedActor, AActor* _otherActor);
    
    UFUNCTION()
    void OnActorBeginOverlap(AActor* _overlappedActor, AActor* _otherActor);
    
    UV2BlockerComponent();
};

