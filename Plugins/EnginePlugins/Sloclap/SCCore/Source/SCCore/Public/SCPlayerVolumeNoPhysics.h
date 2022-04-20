#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "SCPlayerVolumeNoPhysics.generated.h"

UCLASS()
class SCCORE_API ASCPlayerVolumeNoPhysics : public ASCVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bTestOverlap;
    
    UPROPERTY(EditAnywhere)
    float m_fFullyInsideTolerances;
    
public:
    ASCPlayerVolumeNoPhysics();
};

