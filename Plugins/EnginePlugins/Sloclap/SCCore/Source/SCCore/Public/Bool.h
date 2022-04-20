#pragma once
#include "CoreMinimal.h"
#include "Bool.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FBool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bBool;
    
    FBool(){};
};

