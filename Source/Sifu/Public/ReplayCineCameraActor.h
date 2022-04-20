#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CinematicCamera CineCameraActor
#include "CineCameraActor.h"
#include "ReplayCineCameraActor.generated.h"

class UReplayCineCameraComponent;

UCLASS()
class SIFU_API AReplayCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent() const;
    
    /*AReplayCineCameraActor();*/
};

