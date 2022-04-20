#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "TargetableComponent.generated.h"

UCLASS(BlueprintType)
class SIFU_API UTargetableComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bShouldDisplayBP;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetShouldDisplay(bool _bSHould);
    
    UTargetableComponent();
    
    // Fix for true pure virtual functions not being implemented
};

