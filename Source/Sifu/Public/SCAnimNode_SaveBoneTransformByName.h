#pragma once
#include "CoreMinimal.h"
#include "SCAnimNode_SaveBoneTransform.h"
#include "SCAnimNode_SaveBoneTransformByName.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SaveBoneTransformByName : public FSCAnimNode_SaveBoneTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName mSaveBone;
    
    FSCAnimNode_SaveBoneTransformByName();
};

