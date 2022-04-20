#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCCharacterImpostor
#include "SCCharacterImpostor.h"
#include "ESCSignificanceBuckets.h"
//CROSS-MODULE INCLUDE: AkAudio AkExternalSourceInfo
//#include "AkExternalSourceInfo.h"
#include "BaseCharacterImpostor.generated.h"

//class UAkAudioEvent;
class UCurveFloat;
//class UAkRtpc;

UCLASS()
class SIFU_API ABaseCharacterImpostor : public ASCCharacterImpostor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ESCSignificanceBuckets m_eMoanMinBucket;
    
   /* UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* m_MoanEvent;*/
    
  /*  UPROPERTY(EditDefaultsOnly)
    TArray<FAkExternalSourceInfo> m_MoanExternalSourceInfos;*/
    
 /*   UPROPERTY(EditDefaultsOnly)
    UAkRtpc* m_MoanIntensityRTPC;*/
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoanIntensityRTPCName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoanInterpolationInMs;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AngleFromCameraForwardRemappingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoanRefBoneName;
    
public:
    ABaseCharacterImpostor();
};

