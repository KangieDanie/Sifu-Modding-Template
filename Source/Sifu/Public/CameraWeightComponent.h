#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "CameraWeightComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraWeightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetWeight() const;
    
    UCameraWeightComponent();
};

