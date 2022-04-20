#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "HitBox.h"
#include "TakedownInstigatorAbility.generated.h"

UCLASS()
class SIFU_API UTakedownInstigatorAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fSearchWallRadius;
    
    UPROPERTY(EditAnywhere)
    float m_fSearchMarginFromWallEdge;
    
    UPROPERTY(EditAnywhere)
    float m_fSnapMarginFromWallEdge;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDistFromWall;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSnapDistance;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_WallEnvHit;
    
    UPROPERTY(EditAnywhere)
    FName m_WallEnvHitBoneName;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAngleWithNavMeshDeg;
    
    UPROPERTY(EditAnywhere)
    bool m_bHandleEnvironmentalInteractionComponents;
    
    UTakedownInstigatorAbility();
};

