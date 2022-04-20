#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTDecorator
#include "SCBTDecorator.h"
#include "AIActionThrowObjectBTDecorator.generated.h"

UCLASS()
class SIFU_API UAIActionThrowObjectBTDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UAIActionThrowObjectBTDecorator();
};

