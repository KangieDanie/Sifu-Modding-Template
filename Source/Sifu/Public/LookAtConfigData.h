#pragma once
#include "CoreMinimal.h"
#include "LookAtModifierParams.h"
//CROSS-MODULE INCLUDE: SCCore InheritedDataAsset
#include "InheritedDataAsset.h"
#include "ESpeedState.h"
#include "EMoveStatus.h"
#include "LookAtConfigData.generated.h"

UCLASS()
class SIFU_API ULookAtConfigData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxRequiredYaw;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxRequiredPitch;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eMaxSpeedState;
    
    UPROPERTY(EditAnywhere)
    EMoveStatus m_eNeededMoveStatus;
    
    UPROPERTY(EditAnywhere)
    float m_fTimerBeforeLookAt;
    
    UPROPERTY(EditAnywhere)
    FLookAtModifierParams m_modifierParams;
    
    UPROPERTY()
    float m_fRotationMultiplier;
    
    UPROPERTY()
    float m_fMaxClampedYaw;
    
    UPROPERTY()
    float m_fMaxClampedPitch;
    
    ULookAtConfigData();
};

