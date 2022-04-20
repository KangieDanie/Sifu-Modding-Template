#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InputBehaviourStruct.h"
#include "InputData.generated.h"

UCLASS()
class SIFU_API UInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_unrealAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInputBehaviourStruct m_BehaviourStruct;
    
    UInputData();
};

