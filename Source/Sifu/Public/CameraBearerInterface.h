#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "CameraBearerInterface.generated.h"

UINTERFACE(Blueprintable)
class SIFU_API UCameraBearerInterface : public UInterface {
    GENERATED_BODY()
};

class SIFU_API ICameraBearerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetActorRefTransform(float _fDt);
    
};

