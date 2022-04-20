#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "SCAIComponent.generated.h"

UCLASS()
class SCCORE_API USCAIComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    USCAIComponent();
    
    // Fix for true pure virtual functions not being implemented
};

