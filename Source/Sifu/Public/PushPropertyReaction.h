#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "PropertyReaction.h"
#include "PushedFromGrabbedReaction.h"
#include "PushPropertyReaction.generated.h"

USTRUCT(BlueprintType)
struct FPushPropertyReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_WallSplashHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_WallSplashCloseHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_WallSplashHitOnWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_HitBox;
    
    UPROPERTY(EditAnywhere)
    FPropertyReaction m_BasePushReaction;
    
    UPROPERTY(EditAnywhere)
    FPushedFromGrabbedReaction m_PushedFromGrabbedReaction;
    
    UPROPERTY(EditAnywhere)
    float m_EnvAttackRanges[4];
    
    UPROPERTY(EditAnywhere)
    float m_fAttackEnvCapsuleExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fEnvAttackMaxAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fEnvAttackMaxAngleWitoutSnapDeg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fNavigationCostHeuristicScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fNavigationMaxPathCost;
    
    UPROPERTY(EditAnywhere)
    FName m_EnvAttackImpactBoneName;
    
    SIFU_API FPushPropertyReaction();
};

