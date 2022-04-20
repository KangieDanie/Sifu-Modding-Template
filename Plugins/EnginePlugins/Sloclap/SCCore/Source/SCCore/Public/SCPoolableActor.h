#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "SCPoolableActor.generated.h"

UINTERFACE(Blueprintable)
class SCCORE_API USCPoolableActor : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCPoolableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolablePreUninitializeComponents();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolablePreInitializeComponents();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolablePostUninitializeComponents();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolablePostInitializeComponents();
    
};

