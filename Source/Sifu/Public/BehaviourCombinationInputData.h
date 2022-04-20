#pragma once
#include "CoreMinimal.h"
#include "CombinationInputData.h"
#include "InputBehaviourStruct.h"
#include "BehaviourCombinationInputData.generated.h"

UCLASS()
class SIFU_API UBehaviourCombinationInputData : public UCombinationInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInputBehaviourStruct m_BehaviourStruct;
    
    UBehaviourCombinationInputData();
};

