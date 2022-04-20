#pragma once
#include "CoreMinimal.h"
#include "InheritedStruct.h"
#include "InheritedFloatStruct.generated.h"

USTRUCT()
struct SIFU_API FInheritedFloatStruct : public FInheritedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float m_fParentValue;
    
    UPROPERTY(EditAnywhere)
    float m_fFinalValue;
    
    UPROPERTY(EditAnywhere)
    float m_fFactorValue;
    
    UPROPERTY(EditAnywhere)
    float m_fOffsetValue;
    
    FInheritedFloatStruct();
};

