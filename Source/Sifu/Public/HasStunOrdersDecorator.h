#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTDecorator
#include "SCBTDecorator.h"
#include "HasStunOrdersDecorator.generated.h"

UCLASS()
class UHasStunOrdersDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UHasStunOrdersDecorator();
};

