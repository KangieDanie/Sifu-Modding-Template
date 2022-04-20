#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.generated.h"

class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context;

UINTERFACE(Blueprintable, MinimalAPI)
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public UInterface {
    GENERATED_BODY()
};

class IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUserInterface(UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, const TArray<FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates);
    
};

