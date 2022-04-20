#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataTableRowHandle
#include "WeaponAnimInfo.h"
#include "HitBox.h"
#include "AvoidWindow.h"
#include "EApplyDamageOnWeaponType.h"
#include "AvailabilityLayerWindow.h"
#include "AbsorbWindow.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ComboAttack.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SIFU_API FComboAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_AnimationRow;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UAnimationAsset* m_animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_weaponAnimInfoAssociated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUsePreviousAttackFakieState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fAnimFrameRate;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fAnimFrameDeltaTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_iWantedBuildupFrames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOverrideMinBuildupForwardDisplacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMinBuildupForwardDisplacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOverrideAnimRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fGameplayRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIgnoreRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bWantCustomMaxDisSnap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fCustomMaxDisSnap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSnapbackMargin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bWantSnap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bWantSnapBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bWantSnapDuringStrike;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsRushAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAlwaysTrackHittedTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMaxTrackingAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bApplyHitWithoutAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FHitBox> m_HitBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EApplyDamageOnWeaponType m_eApplyDamageOnWeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAvailabilityLayerWindow> m_AvailabilityLayerWindows;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAvoidWindow> m_AvoidWindows;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAbsorbWindow> m_AbsorbWindows;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_AttackProperties;
    
    FComboAttack();
};

