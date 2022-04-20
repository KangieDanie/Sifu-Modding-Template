#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SCCore SCAiActionClassInstance
#include "SCAiActionClassInstance.h"
#include "AIConditionClassInstance.h"
#include "AIConditionedAction.generated.h"

class UComboTransitionCondition;
class USCAiAction;

USTRUCT(BlueprintType)
struct SIFU_API FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UComboTransitionCondition*> m_Conditions;
    
    UPROPERTY()
    TSubclassOf<USCAiAction> m_ActionClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    
    UPROPERTY(EditAnywhere)
    FSCAiActionClassInstance m_Action;
    
    FAIConditionedAction();
};

