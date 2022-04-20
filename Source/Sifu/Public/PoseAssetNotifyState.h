#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE: SCCore SCPoseAssetSelection
#include "SCPoseAssetSelection.h"
#include "PoseAssetNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UPoseAssetNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSCPoseAssetSelection m_PoseAsset;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverridePoseAsset;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomEaseIn;
    
    UPROPERTY(EditAnywhere)
    float m_fEaseInDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomEaseOut;
    
    UPROPERTY(EditAnywhere)
    float m_fEaseOutDuration;
    
    UPROPERTY()
    int32 m_iSerializeVersion;
    
public:
    UPoseAssetNotifyState();
};

