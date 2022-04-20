#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "AnalogInputSequenceStep.h"
#include "EControllerIconAxisTypes.h"
#include "AnalogInputSequenceData.generated.h"

class UVectorInputData;

UCLASS()
class SIFU_API UAnalogInputSequenceData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVectorInputData* m_VectorInputData;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseRawVectorInputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnalogInputSequenceStep> m_Steps;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxParalellStates;
    
    UPROPERTY(EditAnywhere)
    TArray<EControllerIconAxisTypes> m_UIAxis;
    
    UAnalogInputSequenceData();
};

