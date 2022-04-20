#pragma once
#include "CoreMinimal.h"
#include "SCAnimNode_SaveBoneTransform.h"
#include "ESaveBone.h"
#include "SCAnimNode_SaveBoneTransformByEnum.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SaveBoneTransformByEnum : public FSCAnimNode_SaveBoneTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESaveBone meSaveBone;
    
    FSCAnimNode_SaveBoneTransformByEnum();
};

