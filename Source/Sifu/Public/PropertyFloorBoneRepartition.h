#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "PropertyFloorBoneRepartition.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPropertyFloorBoneRepartition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference m_Bone;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DegreeFloorAngleRange;
    
    UPROPERTY(EditAnywhere)
    float m_fRepartitionAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fResultAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform m_BoneResultTransform;
    
    FPropertyFloorBoneRepartition();
};

