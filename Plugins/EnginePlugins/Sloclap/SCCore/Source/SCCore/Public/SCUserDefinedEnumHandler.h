#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SCCORE_API FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UEnum* m_Enum;
    
    UPROPERTY()
    int32 m_iDefaultEnumValue;
    
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    FName m_Value;
    
public:
    FSCUserDefinedEnumHandler(){};
};

