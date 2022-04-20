#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "HittedAnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "OverridingHitBox.generated.h"

class UAttackPropertiesResistanceDB;

USTRUCT(BlueprintType)
struct SIFU_API FOverridingHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAttackPropertiesResistanceDB* m_ResistanceDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_FightingStateLoopAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_FightingStateRecoveryAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHittedAnimContainer m_LethalHittedAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsLethalHittedAnimPlayerOnly;
    
    FOverridingHitBox();
};

