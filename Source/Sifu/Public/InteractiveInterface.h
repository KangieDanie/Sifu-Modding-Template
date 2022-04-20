#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "InteractiveInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable)
class SIFU_API UInteractiveInterface : public UInterface {
    GENERATED_BODY()
};

class SIFU_API IInteractiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanInteract(APawn* _Instigator, FText& _outReason);
    
};

