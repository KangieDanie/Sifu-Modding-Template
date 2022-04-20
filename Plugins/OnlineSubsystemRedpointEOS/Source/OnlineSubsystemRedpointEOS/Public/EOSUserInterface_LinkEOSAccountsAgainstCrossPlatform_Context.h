#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SelectedCandidates(TArray<FEOSUserInterface_CandidateEOSAccount> NewSelectedCandidates);
    
    UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context();
};

