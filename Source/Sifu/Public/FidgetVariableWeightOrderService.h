#pragma once
#include "CoreMinimal.h"
#include "EditableOrderType.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "ESpeedState.h"
#include "FidgetVariableWeightOrderService.generated.h"

class UBlendProfile;

UCLASS(Abstract, EditInlineNew)
class SIFU_API UFidgetVariableWeightOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_EnumLayer;
    
    UPROPERTY(EditAnywhere)
    UBlendProfile* m_DefaultBoneMask;
    
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_OrderType;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eRefSpeedState;
    
    UFidgetVariableWeightOrderService();
};

