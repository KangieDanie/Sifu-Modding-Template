#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine HitResult
#include "EnvironmentalImpactComponent.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UEnvironmentalImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnImpact(AActor* _Instigator, uint8 _uiImpactType, const FHitResult& _hit);
    
    UEnvironmentalImpactComponent();
};

