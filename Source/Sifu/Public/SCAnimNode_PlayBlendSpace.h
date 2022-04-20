#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
//CROSS-MODULE INCLUDE: AnimGraphRuntime AnimNode_BlendSpacePlayer
#include "SCAnimNode_PlayBlendSpace.generated.h"


class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_PlayBlendSpace : public FAnimNode_BlendSpacePlayer {
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
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_PlayBlendSpace();
};

