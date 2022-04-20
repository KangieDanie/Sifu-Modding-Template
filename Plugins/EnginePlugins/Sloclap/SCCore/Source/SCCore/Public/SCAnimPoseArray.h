#pragma once
#include "CoreMinimal.h"
#include "SCPoseAssetSelection.h"
#include "SCAnimPoseArray.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCAnimPoseArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSCPoseAssetSelection> m_Poses;
    
    FSCAnimPoseArray(){};
};

