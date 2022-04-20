#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "CombinationInput.h"
#include "CombinationInputData.generated.h"

UCLASS()
class SIFU_API UCombinationInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bResetChildHoldToggleOnActivation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCombinationInput> m_IncludedInputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FCombinationInput> m_ExcludedInputs;
    
    UCombinationInputData();
};

