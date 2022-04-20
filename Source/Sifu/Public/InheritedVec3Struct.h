#pragma once
#include "CoreMinimal.h"
#include "InheritedFloatStruct.h"
#include "InheritedVec3Struct.generated.h"

USTRUCT()
struct SIFU_API FInheritedVec3Struct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInheritedFloatStruct m_X;
    
    UPROPERTY(EditAnywhere)
    FInheritedFloatStruct m_Y;
    
    UPROPERTY(EditAnywhere)
    FInheritedFloatStruct m_Z;
    
    FInheritedVec3Struct();
};

