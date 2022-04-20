#pragma once
#include "CoreMinimal.h"
#include "ECoordinateSystem.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "SCAnimNode_SaveBoneTransform.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SaveBoneTransform : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference mBone;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECoordinateSystem meTransformSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirror;
    
    UPROPERTY(Transient)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_SaveBoneTransform();
};

