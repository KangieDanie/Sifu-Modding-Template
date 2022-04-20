#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PlayerCameraManager
//CROSS-MODULE INCLUDE: Engine TViewTarget
#include "SCPlayerCameraManager.generated.h"

UCLASS(NonTransient)
class SIFU_API ASCPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FTViewTarget> m_ForcedViewTargetToUpdateUnderneath;
    
public:
    ASCPlayerCameraManager();
};

