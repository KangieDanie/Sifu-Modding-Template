#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EOSUserInterface_EnterDevicePinCode_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void CancelLogin();
    
    UEOSUserInterface_EnterDevicePinCode_Context();
};

