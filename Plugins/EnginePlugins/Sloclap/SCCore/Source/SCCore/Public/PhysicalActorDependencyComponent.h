#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicalActorDependencyComponent.generated.h"

class UPhysicalActorDependencyComponent;

UCLASS()
class SCCORE_API UPhysicalActorDependencyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TSoftObjectPtr<UPhysicalActorDependencyComponent>> m_BakedListeners;
    
public:
    UPhysicalActorDependencyComponent();
};

