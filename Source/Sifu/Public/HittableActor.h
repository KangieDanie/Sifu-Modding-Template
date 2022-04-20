#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "HittableActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class SIFU_API UHittableActor : public UInterface {
    GENERATED_BODY()
};

class SIFU_API IHittableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanBeHitted(AActor* _Instigator);
    
};

