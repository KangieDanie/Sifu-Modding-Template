#pragma once
#include "CoreMinimal.h"
#include "InputBehaviorEnum.h"
#include "InputBehaviourStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInputBehaviourStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputBehaviorEnum m_Behavior;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTimePressed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAutoReset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bRegisterPressTimeOnStack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bRemovePressedTimeFromTimeLeft;
    
    FInputBehaviourStruct();
};

