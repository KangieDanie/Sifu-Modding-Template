#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ESCBlendType
#include "ESCBlendType.h"
#include "HandPoseBlendStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FHandPoseBlendStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fLength;
    
    UPROPERTY(EditAnywhere)
    ESCBlendType m_eBlendType;
    
    FHandPoseBlendStruct();
};

