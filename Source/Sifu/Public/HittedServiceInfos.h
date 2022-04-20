#pragma once
#include "CoreMinimal.h"
//#include "HittedAnimContainer.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "HittedServiceInfos.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct SIFU_API FHittedServiceInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bDiscardHitOrderOnSurvive;
    
    UPROPERTY(EditAnywhere)
    bool m_bDiscardHitOrderOnKill;
    
    UPROPERTY(EditAnywhere)
    bool m_bDropWeaponOnKill;
    
    UPROPERTY(EditAnywhere)
    bool m_bDiscardFightingStatesOrders;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnqueueFightingStateOrder;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_DeathAnimationOnStop;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorDeathAnimation;
    
    UPROPERTY(EditAnywhere)
    bool m_bGenerateImpactOnStop;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomHitAnimOnKill;
    
   /* UPROPERTY(EditAnywhere)
    FHittedAnimContainer m_CustomHitAnimOnKill;*/
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomHitAnimOnSurvive;
    
    /*UPROPERTY(EditAnywhere)
    FHittedAnimContainer m_CustomHitAnimOnSurvive;*/
    
    UPROPERTY(EditAnywhere)
    bool m_bForceDamageToHitBox;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceStructureDamageToHitBox;
    
    UPROPERTY(EditAnywhere)
    bool m_bLaunchFightingStateOrderAfterCurrentAnim;
    
    UPROPERTY(EditAnywhere)
    bool m_bStructureBrokenOrderWaitForEndOfAnim;
    
    UPROPERTY(EditAnywhere)
    bool m_bDelayKillToNextHit;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomFightingStateLoopAnim;
    
  /*  UPROPERTY(EditAnywhere)
    FHittedAnimContainer m_CustomFightingStateLoopAnim;*/
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomFightingStateRecoveryAnim;
    
   /* UPROPERTY(EditAnywhere)
    FHittedAnimContainer m_CustomFightingStateRecoveryAnim;
    
    UPROPERTY(EditAnywhere)
    FBoneReference m_OptionalImpactBone;*/
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayHitSFX;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayDeathSFX;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayHitVFX;
    
    FHittedServiceInfos();
};

