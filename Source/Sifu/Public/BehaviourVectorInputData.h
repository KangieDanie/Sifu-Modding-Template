#pragma once
#include "CoreMinimal.h"
#include "VectorInputData.h"
#include "InputBehaviourStruct.h"
#include "BehaviourVectorInputData.generated.h"

UCLASS()
class SIFU_API UBehaviourVectorInputData : public UVectorInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInputBehaviourStruct m_BehaviourStruct;
    
    UPROPERTY(EditAnywhere)
    bool m_bConsiderChangingValueAsNewPress;
    
    UBehaviourVectorInputData();
};

