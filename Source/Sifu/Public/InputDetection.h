#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "BaseActorConditionInstance.h"
#include "EActionType.h"
#include "EUpdateTargetCondition.h"
#include "InputDetection.generated.h"

class UTargetActionTypeRequest;

USTRUCT(BlueprintType)
struct FInputDetection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputAction m_eInput;
    
    UPROPERTY(EditAnywhere)
    bool m_bValidateOnEnterStack;
    
    UPROPERTY(EditAnywhere)
    int32 m_iEnterStackValidation;
    
    UPROPERTY(EditAnywhere)
    bool m_bValidateOnExitStack;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_BaseCondition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UTargetActionTypeRequest* m_TargetActionTypeRequest;
    
    UPROPERTY(EditAnywhere)
    EActionType m_eTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreTargetOnPriorityResolution;
    
    UPROPERTY(EditAnywhere)
    int32 m_iNoTargetPriority;
    
    UPROPERTY(EditAnywhere)
    bool m_bRequiresTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bRequiresTargetOnStack;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_bRequiresTargetCondition;
    
    UPROPERTY(EditAnywhere)
    bool m_bUpdateTargetOnExitStack;
    
    UPROPERTY(EditAnywhere)
    EUpdateTargetCondition m_eUpdateTargetOnExitStackCondition;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetInputOnDismiss;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetInputOnActivation;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetHoldToggleInputOnAbilityEnd;
    
    SIFU_API FInputDetection();
};

