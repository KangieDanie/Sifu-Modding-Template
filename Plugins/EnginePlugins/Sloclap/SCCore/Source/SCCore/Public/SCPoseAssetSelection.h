#pragma once
#include "CoreMinimal.h"
#include "Animation/SmartName.h"
#include "SCPoseAssetSelection.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPoseAssetSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSmartName m_PoseName;
    
    UPROPERTY(EditAnywhere)
    float m_fWeight;
    
    FSCPoseAssetSelection(){};
};

