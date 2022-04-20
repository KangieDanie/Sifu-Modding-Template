#pragma once
#include "CoreMinimal.h"
#include "CameraDataModifier.h"
#include "CDM_Sound.generated.h"

//class UAkAudioEvent;

UCLASS()
class SIFU_API UCDM_Sound : public UCameraDataModifier {
    GENERATED_BODY()
public:
protected:
   /* UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_InAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_OutAkEvent;*/
    
public:
    UCDM_Sound();
};

