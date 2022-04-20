#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "IsTargetSlotCondition.generated.h"

UCLASS()
class SIFU_API UIsTargetSlotCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Slot;
    
    UIsTargetSlotCondition();
};

