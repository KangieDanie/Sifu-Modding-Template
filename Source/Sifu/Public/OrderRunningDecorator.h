#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTDecorator
#include "SCBTDecorator.h"
#include "EOrderType.h"
#include "OrderRunningDecorator.generated.h"

UCLASS()
class UOrderRunningDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_eOrders;
    
public:
    UOrderRunningDecorator();
};

