#pragma once
#include "CoreMinimal.h"
#include "SoundTensionVolume.h"
#include "SoundTensionPortal.generated.h"

UCLASS()
class SIFU_API ASoundTensionPortal : public ASoundTensionVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 m_iTensionLevelBackward;
    
public:
    ASoundTensionPortal();
};

