#pragma once
#include "CoreMinimal.h"
#include "InheritedStruct.generated.h"

USTRUCT()
struct SIFU_API FInheritedStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bOverrideParentValue;
    
public:
    UPROPERTY(EditAnywhere)
    bool m_bIsEditable;
    
    FInheritedStruct();
};

