#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceReplicationComponent.h"
#include "FightingCharAnimRepComponent.generated.h"

UCLASS()
class SIFU_API UFightingCharAnimRepComponent : public UAnimInstanceReplicationComponent {
    GENERATED_BODY()
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemoveVariableWeightActivation(const FName _name);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAddVariableWeightActivation(const FName _name, bool _bMirror);
    
    UFightingCharAnimRepComponent();
};

