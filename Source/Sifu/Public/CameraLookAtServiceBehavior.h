#pragma once
#include "CoreMinimal.h"
#include "ELookAtType.h"
#include "CameraLookAtServiceBehaviorConfig.h"
#include "CameraLookAtServiceBehaviorTime.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CameraLookAtServiceBehavior.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FCameraLookAtServiceBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtType m_eLookATType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLookAtServiceBehaviorTime m_timeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLookAtServiceBehaviorConfig m_configParams;
    
    FCameraLookAtServiceBehavior();
};

