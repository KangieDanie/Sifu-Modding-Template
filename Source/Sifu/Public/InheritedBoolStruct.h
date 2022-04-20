#pragma once
#include "CoreMinimal.h"
#include "InheritedStruct.h"
#include "EInheritanceChoice.h"
#include "InheritedBoolStruct.generated.h"

USTRUCT()
struct SIFU_API FInheritedBoolStruct : public FInheritedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bParentBool;
    
    UPROPERTY(EditAnywhere)
    bool m_bFinalBool;
    
protected:
    UPROPERTY(EditAnywhere)
    EInheritanceChoice m_eInheritanceChoice;
    
public:
    FInheritedBoolStruct();
};

