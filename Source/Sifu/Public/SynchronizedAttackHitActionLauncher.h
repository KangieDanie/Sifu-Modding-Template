#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "HitActionLauncher.h"
#include "OverridingHitBox.h"
#include "EOrderType.h"
#include "EditableOrderType.h"
#include "EQuadrantTypes.h"
#include "AnimSyncContainer.h"
#include "WeaponAnimInfo.h"
#include "SynchronizedAttackHitActionLauncher.generated.h"

class AActor;
class AFightingCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API USynchronizedAttackHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bMirrorByQuadrant;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eInstigatorOrderType;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eVictimOrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsInstigatorSnaper;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsVictimSnaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableOrderType m_OrderTypeInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableOrderType m_OrderTypeVictim;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanCounterGrab;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseVictimForQuadrantComputation;
    
    UPROPERTY(EditAnywhere)
    EQuadrantTypes m_eStartQuadrant;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorOnBackFrontQuadrant;
    
public:
    UFUNCTION(BlueprintPure)
    static bool BPF_AreHitLethal(AFightingCharacter* _victimChar, const TArray<FOverridingHitBox>& _hitsToApply);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnLaunch(const FHitDescription& _hitDescription, AActor* _Instigator, uint8 _uiInstigatorOrder, AActor* _victim, uint8 _uiVictimOrder);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring) const;
    
    USynchronizedAttackHitActionLauncher();
};

