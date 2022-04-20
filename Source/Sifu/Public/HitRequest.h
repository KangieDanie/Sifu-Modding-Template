#pragma once
#include "CoreMinimal.h"
#include "AttackRequest.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ELimbs.h"
#include "EInstigatorType.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "HitRequest.generated.h"

class AUsableItem;
class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FHitRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FAttackRequest m_AttackRequest;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult m_EnvironmentImpact;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> m_InstigatorItem;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector m_InstigatorDirection;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EInstigatorType m_eInstigatorType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, Transient)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ELimbs m_eAttackerLimb;
    
    UPROPERTY(Transient)
    uint8 m_uiDamageID;
    
    UPROPERTY(Transient)
    uint8 m_uiAttackOrderID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vDamageDir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bCastBoundariesRelativeToInstigator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AUsableItem> m_UsableItemIntermediate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTagContainer m_AttackProperties;
    
    UPROPERTY(Transient)
    uint8 m_uiHitBoxID;
    
    UPROPERTY(Transient)
    bool m_bCanBeDefended;
    
    FHitRequest();
};

