#pragma once
#include "CoreMinimal.h"
#include "EBlendSpaceParamComputeType.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "WeaponBlendSpaceParam.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FWeaponBlendSpaceParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBlendSpaceParamComputeType m_eBlendSpaceParamComputeType;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_customRange;
    
    UPROPERTY(EditAnywhere)
    FName m_DistanceRefBone;
    
    UPROPERTY(EditAnywhere)
    FName m_DistanceTargetBone;
    
    UPROPERTY(EditAnywhere)
    FVector m_vDistanceOffset;
    
    FWeaponBlendSpaceParam();
};

