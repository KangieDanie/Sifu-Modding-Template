#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "SCAnimNode_ComputeVariableWeight.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_ComputeVariableWeight : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
    FSCAnimNode_ComputeVariableWeight();
};

