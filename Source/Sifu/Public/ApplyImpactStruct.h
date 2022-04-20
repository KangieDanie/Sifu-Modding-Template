#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "HittedAnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "ApplyImpactStruct.generated.h"

class UAttackPropertiesResistanceDB;

USTRUCT(BlueprintType)
struct FApplyImpactStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitDescription m_hitDescription;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bUseForcedHittedAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHittedAnimContainer m_ForcedAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bPlayOrderHitted;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bEnterRagdoll;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bDropWeaponOnDeath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bPlayOrderFightingState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 m_uiPlayFightingStateOrderAfter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAttackPropertiesResistanceDB* m_specialResistanceDB;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 m_uiSpecificOrderIDToPlayBeforeFightingStateOrder;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bUseForcedFightingStateAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAnimContainer m_ForcedFightingStateAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bInstantPlayStructureBrokenOrder;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bUseForcedFightingStateRecoveryAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAnimContainer m_ForcedFightingStateAnimRecovery;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bUseForceMirrorFightingState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bForceMirrorFightingState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bNotifyInstigator;
    
    SIFU_API FApplyImpactStruct();
};

