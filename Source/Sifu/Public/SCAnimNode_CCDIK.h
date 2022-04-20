#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_CCDIK.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: AnimGraphRuntime AnimNode_CCDIK
#include "SCAnimNode_CCDIK.generated.h"


class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_CCDIK : public FAnimNode_CCDIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName mSaveBone;
    
    UPROPERTY(EditAnywhere)
    FVector mvEffectorComponentSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirror;
    
    UPROPERTY(Transient)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_CCDIK();
};

