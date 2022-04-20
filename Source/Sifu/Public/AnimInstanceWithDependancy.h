#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAnimInstance
#include "SCAnimInstance.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "EMoveTransitionType.h"
#include "BlendSpaceDirectionContainer.h"
#include "AnimInfo.h"
#include "AnimStructMoveTransition.h"
#include "AnimInstanceWithDependancy.generated.h"

UCLASS(NonTransient)
class SIFU_API UAnimInstanceWithDependancy : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    FAnimContainer m_IdleAnimContainerFL;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    FAnimContainer m_IdleAnimContainerFR;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    FAnimContainer m_IdleAnimContainerBR;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    FAnimContainer m_IdleAnimContainerBL;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    TArray<FAnimContainer> m_FreeMoveAnimContainer;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBlendSpaceDirectionContainer> m_FreeMoveBlendSpace;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    USCAnimInstance* m_MasterAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bAnyAnimInProgress;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_animInfo1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_animInfo2;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_animInfo3;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_animInfo4;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_V0Info;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_V1Info;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_V2Info;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FAnimInfo m_V3Info;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FAnimStructMoveTransition m_UTurnInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimStructMoveTransition m_StartAnimInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimStructMoveTransition m_StopAnimInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimStructMoveTransition m_TurnInInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimStructMoveTransition m_LandingInfo;
    
    UPROPERTY(BlueprintReadOnly)
    EMoveTransitionType m_eTransitionType;
    
    UPROPERTY(EditAnywhere)
    FName m_VariableWeightMasterStateName;
    
    UFUNCTION()
    void Update(float _fDt);
    
    UFUNCTION(BlueprintPure)
    USCAnimInstance* BPF_GetMasterAnimInstance() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UpdateFromMasterAnimInstance(float _fDt);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAnimInstanceWithDependancy();
};

