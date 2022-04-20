#pragma once
#include "CoreMinimal.h"
#include "EditableOrderType.h"
#include "OrderService.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "EControllerNature.h"
#include "EFightingState.h"
#include "EFightingActionState.h"
#include "EInterruptionBehavior.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "HitBox.h"
#include "CheckTargetStateOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UCheckTargetStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bCheckOrder;
    
    UPROPERTY(EditAnywhere)
    TArray<FEditableOrderType> m_StopOnInterruptedOnlyByOrders;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eExpectedTargetCurrentOrder;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_EpectedTargetCurrentBPOrder;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckSnap;
    
    UPROPERTY(EditAnywhere)
    EControllerNature m_eCheckSnapOnControllerNature;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDistFromSnap;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckState;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckDeath;
    
    UPROPERTY(EditAnywhere)
    bool m_bInverseStateCheck;
    
    UPROPERTY(EditAnywhere)
    EFightingActionState m_eExpectedState;
    
    UPROPERTY(EditAnywhere)
    EInterruptionBehavior m_eInterruptionBehaviour;
    
    UPROPERTY(EditAnywhere)
    bool m_bSwapAtCurrentTime;
    
    UPROPERTY(EditAnywhere)
    TArray<EFightingState> m_RecoveredFightingStates;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SwapAnimation;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_CustomFightingStateRecoveryAnim;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_Hit;
    
    UCheckTargetStateOrderService();
};

