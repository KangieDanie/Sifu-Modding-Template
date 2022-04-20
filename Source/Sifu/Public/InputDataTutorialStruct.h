#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "EControllerIconAxisTypes.h"
#include "EInputDataTutorialDisplayConstraints.h"
#include "InputDataTutorialStruct.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FInputDataTutorialStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_PrefixText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_InputDataPad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_InputDataMouse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_SuffixText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EInputDataTutorialDisplayConstraints m_InputDataTutorialDisplayConstraint;
    
    FInputDataTutorialStruct();
};

