#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraTransitionEventStruct.generated.h"

class UCameraTransitionEvent;

USTRUCT(BlueprintType)
struct SIFU_API FCameraTransitionEventStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fRatio;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraTransitionEvent> m_event;
    
    FCameraTransitionEventStruct();
};

