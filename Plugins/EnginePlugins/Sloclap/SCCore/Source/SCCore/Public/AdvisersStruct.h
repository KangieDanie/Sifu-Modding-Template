#pragma once
#include "CoreMinimal.h"
#include "SCDataAdviserEnumHandler.h"
#include "SCTechAdviserEnumHandler.h"
#include "AdvisersStruct.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAdvisersStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCTechAdviserEnumHandler m_techAdviser;
    
    UPROPERTY(EditAnywhere)
    FSCDataAdviserEnumHandler m_dataAdviser;
    
    FAdvisersStruct() {};
};

