#pragma once
#include "CoreMinimal.h"
#include "BoolCameraMixerBlender.h"
#include "BlackboardBoolCameraMixerBlender.generated.h"

UCLASS(Abstract)
class SIFU_API UBlackboardBoolCameraMixerBlender : public UBoolCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_KeyName;
    
public:
    UBlackboardBoolCameraMixerBlender();
};

