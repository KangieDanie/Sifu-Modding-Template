#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EEOSUserInterface_SwitchToCrossPlatformAccount_Choice.h"
#include "EOSUserInterface_SwitchToCrossPlatformAccount_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SelectChoice(EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice);
    
    UEOSUserInterface_SwitchToCrossPlatformAccount_Context();
};

