#pragma once
#include "CoreMinimal.h"
#include "SCFootIkRaycast.h"
#include "SCFootIkCliffRaycast.generated.h"

UCLASS()
class SCCORE_API USCFootIkCliffRaycast : public USCFootIkRaycast {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fCliffTraceOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fCliffOffset;
    
public:
    USCFootIkCliffRaycast();
};

