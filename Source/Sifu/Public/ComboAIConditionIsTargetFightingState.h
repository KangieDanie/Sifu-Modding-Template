#pragma once
#include "CoreMinimal.h"
#include "EComboAIConditionOnState.h"
#include "ComboAIConditionOnState.h"
#include "EFightingState.h"
#include "ComboAIConditionIsTargetFightingState.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsTargetFightingState : public UComboAIConditionOnState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EComboAIConditionOnState m_eDesiredState;
    
    UPROPERTY(EditAnywhere)
    EFightingState m_eFightingState;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnlyHighestFightingState;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseStateDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fStateValidDuration;
    
public:
    UComboAIConditionIsTargetFightingState();
};

