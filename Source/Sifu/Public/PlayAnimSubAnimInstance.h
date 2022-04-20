#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAnimInstance
#include "SCAnimInstance.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "PlayAnimSubAnimInstance.generated.h"

UCLASS(NonTransient)
class SIFU_API UPlayAnimSubAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    uint8 m_uiSubStateId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(EditAnywhere)
    FName m_IKSubInstanceTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 m_iSubStateID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    uint8 m_uiOrderID;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float m_fGlobalAlpha;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool m_bIKEnabled;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetTargetVerticalOffset(float _fVerticalOffet);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayAnimSubAnimInstance();
};

