#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AnimGraphRuntime AnimNode_SkeletalControlBase
#include "BoneIK.h"
#include "EAimIKSolverType.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "SCAnimNode_AimIK.generated.h"


USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_AimIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBoneIK> mIKBoneChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName mSocketNameToTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector mvTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mfMinDistanceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mfMaxDistanceRatio;
    
  /*  UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference mBoneAnimTargetted;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbUseDirectWorldPositionForHitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector mvHitTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 muiNbIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mfAbsoluteAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbDebugActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAimIKSolverType meIKSolverType;
    
    FSCAnimNode_AimIK();
};

