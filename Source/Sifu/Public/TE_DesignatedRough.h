#pragma once
#include "CoreMinimal.h"
#include "TE_DesignatedPrecise.h"
#include "TE_DesignatedRough.generated.h"

UCLASS(Abstract)
class SIFU_API UTE_DesignatedRough : public UTE_DesignatedPrecise {
    GENERATED_BODY()
public:
    UTE_DesignatedRough();
};

