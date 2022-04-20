#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "BaseTargetEvaluation.h"
#include "TE_TargetSlot.generated.h"

UCLASS()
class SIFU_API UTE_TargetSlot : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Slot;
    
    UPROPERTY(EditAnywhere)
    bool m_bForced;
    
    UTE_TargetSlot();
};

