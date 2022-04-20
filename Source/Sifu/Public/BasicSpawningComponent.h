#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "BasicSpawningComponent.generated.h"

UCLASS(Abstract)
class SIFU_API UBasicSpawningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBasicSpawningComponent();
};

