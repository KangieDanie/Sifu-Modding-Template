#pragma once
#include "CoreMinimal.h"
#include "CameraWeightComponent.h"
#include "FixedCameraWeightComponent.generated.h"

UCLASS()
class SIFU_API UFixedCameraWeightComponent : public UCameraWeightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fFixedWeight;
    
public:
    UFixedCameraWeightComponent();
};

