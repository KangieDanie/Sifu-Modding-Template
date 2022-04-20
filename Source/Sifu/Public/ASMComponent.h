#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "EFightingActionState.h"
#include "ASMComponent.generated.h"

UCLASS(BlueprintType)
class SIFU_API UASMComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    EFightingActionState BPF_GetCurrentActionState() const;
    
    UASMComponent();
    
    // Fix for true pure virtual functions not being implemented
};

