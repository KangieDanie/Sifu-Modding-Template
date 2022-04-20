#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BaseActorConditionInstance.h"
#include "SCAnimNotifyState.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API USCAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bRectifiedActivationConditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bDebugLogActivationTime;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotifyState();
};

