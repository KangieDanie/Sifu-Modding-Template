#pragma once
#include "CoreMinimal.h"
#include "ComboAIConditionOnState.h"
#include "EAITargetOrderState.h"
#include "EOrderType.h"
#include "ComboAIConditionIsTargetOrderState.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsTargetOrderState : public UComboAIConditionOnState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EAITargetOrderState m_eDesiredState;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrder;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseOrderDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fStateValidDuration;
    
public:
    UComboAIConditionIsTargetOrderState();
};

