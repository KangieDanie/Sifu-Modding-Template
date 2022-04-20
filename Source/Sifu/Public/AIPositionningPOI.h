#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: SCCore SCGestureContainer
#include "SCGestureContainer.h"
#include "ESCAICombatRoles.h"
#include "AIPositionningPOI.generated.h"

USTRUCT(BlueprintType)
struct FAIPositionningPOI {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_EnemyDistanceRange;
    
    UPROPERTY(EditAnywhere)
    float m_fEnemyDistanceZTolerance;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepLockMoveOnWayToPOI;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanUseAttackTickets;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBecomeDirectOpponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bJiggle;
    
    UPROPERTY(EditAnywhere)
    int32 m_eCombatRolesMask;
    
    UPROPERTY(EditAnywhere)
    float m_fCooldownWhenOccupantLeaves;
    
    UPROPERTY(EditAnywhere)
    FSCGestureContainer m_GestureAnimations;
    
    UPROPERTY(EditAnywhere)
    ESCAICombatRoles m_eRoleOnTargetCloserToMinRange;
    
    SIFU_API FAIPositionningPOI();
};

