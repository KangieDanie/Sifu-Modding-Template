#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin EOperationType
#include "EOperationType.h"
#include "HealthCondition.generated.h"

UCLASS()
class SIFU_API UHealthCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOperationType m_eOperation;
    
    UPROPERTY(EditAnywhere)
    float m_fValue;
    
    UHealthCondition();
};

