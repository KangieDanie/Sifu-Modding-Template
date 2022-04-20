#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SCCore InheritedDataAsset
#include "InheritedDataAsset.h"
#include "HitImpact.h"
#include "AnimByHeight.h"
#include "HitBox.h"
#include "AnimByCardinalThenHeight.h"
#include "DeflectImpact.h"
#include "EAvoidLaunchMethod.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "EHeight.h"
#include "GuardDB.generated.h"

class UAnimSequence;
class UCurveFloat;
class UDefenseAnimRequest;
class UAvailabilityLayerData;
class UParryAnimRequest;
class AFightingCharacter;

UCLASS(BlueprintType)
class SIFU_API UGuardDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_aGuardAnimations[4];
    
    UPROPERTY(EditAnywhere)
    bool m_bGuardMirrorFrontRightBackLeft;
    
    UPROPERTY(EditAnywhere)
    FAnimByHeight m_aGuardPrepAnimations[4];
    
    UPROPERTY(EditAnywhere)
    FAnimByCardinalThenHeight m_aHittedGuardAnimations[4];
    
    UPROPERTY(EditAnywhere)
    FAnimByCardinalThenHeight m_aHittedDeflectAnimations[4];
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_aGuardAnimationsWeapon[4];
    
    UPROPERTY(EditAnywhere)
    FAnimByHeight m_aGuardPrepAnimationsWeapon[4];
    
    UPROPERTY(EditAnywhere)
    FAnimByCardinalThenHeight m_aHittedGuardAnimationsWeapon[4];
    
    UPROPERTY(EditAnywhere)
    FAnimByCardinalThenHeight m_aHittedDeflectAnimationsWeapon[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGuardAngleRootToHips;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGuardAngleHipsToRoot;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bGuardReorientBackToFront;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPrepEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DynamicEnteringPrep;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnteringPrepDuration;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DynamicExitingPrep;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fExitingPrepDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPrepRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPrepForbidMove;
    
    UPROPERTY(EditAnywhere)
    float m_fKnockbackCoeff;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_ParryHit;
    
    UPROPERTY(EditAnywhere)
    float m_fParryStructureRecovery;
    
    UPROPERTY(EditAnywhere)
    float m_fParryFreezeFrames;
    
    UPROPERTY(EditAnywhere)
    float m_fParrySBFreezeFrames;
    
    UPROPERTY(EditAnywhere)
    float m_ParryAttackerStructureDamage;
    
    UPROPERTY(EditAnywhere)
    float m_ParryAttackerSuperDizzyDamage;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyDamagesOnGuardBroken;
    
    UPROPERTY(EditAnywhere)
    FDeflectImpact m_DefaultDeflectImpact;
    
    UPROPERTY(EditAnywhere)
    FHitImpact m_DefaultHitImpact;
    
    UPROPERTY(EditAnywhere)
    FHitImpact m_DefaultGuardImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDeflectedDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_DeflectedAttackScaleCurves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAvoidLaunchMethod m_eDeflectedLaunchMethodOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bTmpEnableDeflectedOrder;
    
    UPROPERTY(EditAnywhere)
    float m_fParryAnimDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fGrabDuration;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ParryWindow;
    
    UPROPERTY(EditAnywhere)
    float m_fForcedGuardDuration;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_ForcedGuardAvailabilityLayer;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDefenseAnimRequest> m_DefenseAnimRequest;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UParryAnimRequest> m_ParryAnimRequest;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_BPPickupOnParryOrderID;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetPickupOnParryAnim(const FHitRequest& _request, AFightingCharacter* _character, FAnimContainer& _outAnim) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* BPF_GetHittedGuardAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* BPF_GetHittedGuardAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* BPF_GetHittedDeflectAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* BPF_GetHittedDeflectAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UGuardDB();
};

