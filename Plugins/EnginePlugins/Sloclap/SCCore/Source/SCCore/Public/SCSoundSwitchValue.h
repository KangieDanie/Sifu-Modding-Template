#pragma once
#include "CoreMinimal.h"
#include "SCSoundSwitchValue.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCSoundSwitchValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Group;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_State;
    
    FSCSoundSwitchValue(){};
};

