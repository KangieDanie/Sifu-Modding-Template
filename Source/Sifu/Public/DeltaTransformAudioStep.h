#pragma once
#include "CoreMinimal.h"
#include "DeltaTransformAudioStep.generated.h"

//class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FDeltaTransformAudioStep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fMinDeltaAngle;
    
   /* UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_akEvent;*/
    
    SIFU_API FDeltaTransformAudioStep();
};

