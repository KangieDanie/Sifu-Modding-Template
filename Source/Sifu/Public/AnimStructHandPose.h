#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "EHandPoseBlendInTypes.h"
#include "EHandPoseBlendOutTypes.h"
#include "AnimStructHandPose.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructHandPose : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EHandPoseBlendInTypes m_eHandPoseBlendInType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EHandPoseBlendInTypes m_eHandPoseBlendInType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EHandPoseBlendOutTypes m_eHandPoseBlendOutType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EHandPoseBlendOutTypes m_eHandPoseBlendOutType2;
    
    FAnimStructHandPose();
};

