#pragma once
#include "CoreMinimal.h"
#include "SCFootIkService.h"
#include "SCFootIkPlanting.generated.h"

UCLASS()
class SCCORE_API USCFootIkPlanting : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bIgnore2DPlane;
    
public:
    USCFootIkPlanting();
};

