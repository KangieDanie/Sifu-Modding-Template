#pragma once
#include "CoreMinimal.h"
#include "EOSUserInterface_CandidateEOSAccount.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMREDPOINTEOS_API FEOSUserInterface_CandidateEOSAccount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText DisplayName;
    
    FEOSUserInterface_CandidateEOSAccount();
};

