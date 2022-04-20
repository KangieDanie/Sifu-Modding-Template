#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_SelectEOSAccount_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_SelectEOSAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SelectCandidate(FEOSUserInterface_CandidateEOSAccount SelectedCandidate);
    
    UEOSUserInterface_SelectEOSAccount_Context();
};

