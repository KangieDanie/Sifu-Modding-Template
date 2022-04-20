#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "IKProfileBlendInfos.h"
#include "BoneContainer.h"
#include "IKProfileAnimNotifyState.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UIKProfileAnimNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Profile;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_CrossFadeOutWithProfile;
    
    UPROPERTY(EditAnywhere)
    FIKProfileBlendInfos m_BoneLocationBlend;
    
    UPROPERTY(EditAnywhere)
    FIKProfileBlendInfos m_LimbRotationBlend;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ImpactTime;
    
    UPROPERTY(EditAnywhere)
    FBoneReference m_TargetBoneReference;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetIKAlphaOnStop;
    
    UPROPERTY(EditAnywhere)
    bool m_bRotateImpactOrientation;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceBoneRotation;
    
    UPROPERTY(EditAnywhere)
    float m_fForceBoneRotationBlendDuration;
    
    UIKProfileAnimNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};

