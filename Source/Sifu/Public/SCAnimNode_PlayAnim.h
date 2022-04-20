#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_SequencePlayer
#include "SCAnimNode_PlayAnim.generated.h"


class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_PlayAnim : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 miAnimSubStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 muiTransitionGlobalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 muiOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbIgnoreOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbUseStartCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mfStartCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbIgnoreTimeAccumulator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMirrorAnimDB* mMirrorAnimDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbRecordedForReplay;
    
    FSCAnimNode_PlayAnim();
};

