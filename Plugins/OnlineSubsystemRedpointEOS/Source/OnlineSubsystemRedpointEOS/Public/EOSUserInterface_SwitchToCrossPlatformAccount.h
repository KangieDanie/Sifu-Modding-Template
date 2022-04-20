#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "EOSUserInterface_SwitchToCrossPlatformAccount.generated.h"

class UEOSUserInterface_SwitchToCrossPlatformAccount_Context;

UINTERFACE(Blueprintable, MinimalAPI)
class UEOSUserInterface_SwitchToCrossPlatformAccount : public UInterface {
    GENERATED_BODY()
};

class IEOSUserInterface_SwitchToCrossPlatformAccount : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUserInterface(UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, const FString& EpicAccountName);
    
};

