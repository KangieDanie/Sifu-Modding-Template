#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OrderParams.generated.h"

UCLASS(Abstract, EditInlineNew)
class UOrderParams : public UObject {
    GENERATED_BODY()
public:
    UOrderParams();
};

