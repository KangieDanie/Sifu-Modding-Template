#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ProxyActorsContainerComponent.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProxyActorsContainerComponentOnTriggerProxyActor, AActor*, _proxyActor);

UCLASS(BlueprintType)
class SIFU_API UProxyActorsContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FProxyActorsContainerComponentOnTriggerProxyActor OnTriggerProxyActor;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterProxyActor(AActor* _proxyActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterProxyActor(AActor* _proxyActor);
    
public:
    UProxyActorsContainerComponent();
};

