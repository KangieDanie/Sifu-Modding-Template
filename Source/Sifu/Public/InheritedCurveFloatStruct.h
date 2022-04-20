#pragma once
#include "CoreMinimal.h"
#include "InheritedStruct.h"
#include "EInheritanceChoice.h"
#include "InheritedCurveFloatStruct.generated.h"

class UCurveFloat;

USTRUCT()
struct SIFU_API FInheritedCurveFloatStruct : public FInheritedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_parentCurveFloat;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_finalCurveFloat;
    
protected:
    UPROPERTY(EditAnywhere)
    EInheritanceChoice m_eInheritanceChoice;
    
public:
    FInheritedCurveFloatStruct();
};

