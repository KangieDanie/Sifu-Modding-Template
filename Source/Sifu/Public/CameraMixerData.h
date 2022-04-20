#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbstractCameraData.h"
#include "CameraMixerData.generated.h"

class UCameraMixerBlender;

UCLASS()
class SIFU_API UCameraMixerData : public UAbstractCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAbstractCameraData* m_StartCamera;
    
    UPROPERTY(EditAnywhere)
    UAbstractCameraData* m_EndCamera;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraMixerBlender> m_BlenderClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_bUseEndCamForTransition;
    
protected:
    UFUNCTION()
    void ImportTransitionsFromStartCam();
    
    UFUNCTION()
    void ImportTransitionsFromEndCam();
    
public:
    UCameraMixerData();
};

