#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EEOSUserInterface_SignInOrCreateAccount_Choice.h"
#include "EOSUserInterface_SignInOrCreateAccount_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
    
    UEOSUserInterface_SignInOrCreateAccount_Context();
};

