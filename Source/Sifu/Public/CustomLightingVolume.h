#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCPlayerVolumeNoPhysics
#include "SCPlayerVolumeNoPhysics.h"
//CROSS-MODULE INCLUDE: Engine WuguanCustomLightingUserParameters
#include "CustomLightingVolume.generated.h"

UCLASS()
class SIFU_API ACustomLightingVolume : public ASCPlayerVolumeNoPhysics {
    GENERATED_BODY()
public:
private:
  /*  UPROPERTY(EditAnywhere)
    FWuguanCustomLightingUserParameters m_Parameters;*/
    
public:
    ACustomLightingVolume();
};

