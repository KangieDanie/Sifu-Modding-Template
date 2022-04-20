#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EOrderType.h"
#include "EOrderAccessMode.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "OrderCondition.generated.h"

UCLASS()
class SIFU_API UOrderCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_BPOrderType;
    
    UPROPERTY(EditAnywhere)
    EOrderAccessMode m_eAccessMode;
    
    UOrderCondition();
};

