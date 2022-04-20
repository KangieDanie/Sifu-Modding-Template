#pragma once
#include "CoreMinimal.h"
#include "CameraDataModifier.h"
#include "CDM_AnimDrivenSound.generated.h"

class UDeltaTransformAudioData;

UCLASS()
class SIFU_API UCDM_AnimDrivenSound : public UCameraDataModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDeltaTransformAudioData* m_whooshAudio;
    
public:
    UCDM_AnimDrivenSound();
};

