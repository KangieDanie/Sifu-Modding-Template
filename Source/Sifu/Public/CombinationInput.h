#pragma once
#include "CoreMinimal.h"
#include "CombinationInput.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FCombinationInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_Input;
    
    UPROPERTY(EditAnywhere)
    float m_fLifeSpan;
    
    UPROPERTY(EditAnywhere)
    bool m_bRegisterPressTimeOnStack;
    
    UPROPERTY(EditAnywhere)
    bool m_bRemovePressedTimeFromTimeLeft;
    
    SIFU_API FCombinationInput();
};

