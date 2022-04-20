#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ReplayableStaticObjectComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class SIFU_API UReplayableStaticObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPrimitiveComponent* m_RootPrimComp;
    
public:
    UReplayableStaticObjectComponent();
};

