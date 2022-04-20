#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorTargetConditionInstance.h"
#include "CameraRepulsionConfigElement.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraRepulsionConfigElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    UPROPERTY(EditAnywhere)
    TArray<FBaseActorTargetConditionInstance> m_ActorTargetConditions;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DeadZoneHidingAngleSizePerSafeZoneSizeFront;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DeadZoneHidingAngleSizePerSafeZoneSizeBack;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DeadZoneHidingSizeFactorPerDistanceToTargetFront;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DeadZoneHidingSizeFactorPerDistanceToTargetBack;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_RepulsionSpringValuePerCameraRailCollisionRatio;
    
    FCameraRepulsionConfigElement();
};

