#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "SCAkAudioRTPCNotifyState.generated.h"

//class UAkRtpc;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API USCAkAudioRTPCNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
   /* UPROPERTY(EditAnywhere)
    UAkRtpc* m_RTCPObject;*/
    
    UPROPERTY(EditAnywhere)
    FName m_RTPCName;
    
    UPROPERTY(EditAnywhere)
    float m_fValueAtStart;
    
    UPROPERTY(EditAnywhere)
    float m_fValueAtEnd;
    
    UPROPERTY(EditAnywhere)
    bool m_bCallRTPCOnSelf;
    
public:
    USCAkAudioRTPCNotifyState();
};

