#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "VariableWeightEnumHandler.h"
#include "SCAnimNode_MultiVariableWeightBlender.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_MultiVariableWeightBlender : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPoseLink> VariableWeightPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVariableWeightEnumHandler> Layers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFullOverrideAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFullOverrideMirrorAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float fMirrorOverrideAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMute;
    
    FSCAnimNode_MultiVariableWeightBlender();
};

