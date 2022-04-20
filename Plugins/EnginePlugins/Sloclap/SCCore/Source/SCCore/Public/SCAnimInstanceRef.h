#pragma once
#include "CoreMinimal.h"
#include "SCAnimInstanceRef.generated.h"

class USCAnimInstanceBase;

USTRUCT(BlueprintType)
struct SCCORE_API FSCAnimInstanceRef {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USCAnimInstanceBase* m_AnimInstance;
    
    UPROPERTY(Transient)
    FName m_Name;
    
    FSCAnimInstanceRef(){};
};

