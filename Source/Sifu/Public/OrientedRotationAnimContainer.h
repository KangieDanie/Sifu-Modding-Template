#pragma once
#include "CoreMinimal.h"
//#include "RotationAnimContainer.h"
#include "OrientedRotationAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FOrientedRotationAnimContainer {
    GENERATED_BODY()
public:
    /*UPROPERTY(EditAnywhere)
    FRotationAnimContainer m_leftAnims;*/
  /*  
    UPROPERTY(EditAnywhere)
    FRotationAnimContainer m_rightAnims;*/
    
    SIFU_API FOrientedRotationAnimContainer();
};

