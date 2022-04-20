#pragma once
#include "CoreMinimal.h"
#include "AppliedDeflectImpact.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "EGuardType.h"
#include "EHeight.h"
#include "EImpactType.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AppliedHitImpact.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EQuadrantTypes.h"
#include "ImpactResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FImpactResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bGuardBreak;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bSuperDizzyAlreadyAvailable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bSuperDizzyAvailable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* m_Victim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESCCardinalPoints m_eImpactCardinalPoint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESCCardinalPoints m_eImpactCardinalPointInVictimSpace;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bAlreadyGuardBroken;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bCriticalHit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EHeight m_eHeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EImpactType m_eImpactType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EGuardType m_eGuardType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAppliedHitImpact m_HitImpact;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAppliedDeflectImpact m_DeflectImpact;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fInstigatorStructureBeforeImpact;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fHitAnimationTimeElapsedDuringFreeze;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bLethal;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vKnockbackPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EQuadrantTypes m_eTowardInstigatorQuadrant;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EQuadrantTypes m_eDefenderQuadrant;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bPushedBlockForce;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vImpactLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vImpactDir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fInstigatorFreezeDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fStunTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bResilienceImpact;
    
   /* UPROPERTY(BlueprintReadOnly, Transient)
    FBoneReference m_OptionalImpactBone;*/
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bPlaySFX;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bPlayDeathSFX;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bPlayVFX;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bAvoidDizzy;
    
    SIFU_API FImpactResult();
};

