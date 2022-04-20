#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTDecorator
#include "SCBTDecorator.h"
#include "AIActionFetchObjectBTDecorator.generated.h"

UCLASS()
class SIFU_API UAIActionFetchObjectBTDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UAIActionFetchObjectBTDecorator();
};

