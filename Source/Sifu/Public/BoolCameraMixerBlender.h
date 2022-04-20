#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ESCBlendType
#include "ESCBlendType.h"
#include "OverTimeCameraMixerBlender.h"
#include "BoolCameraMixerBlender.generated.h"

class UCurveFloat;
class UCameraComponentThird;

UCLASS(Abstract)
class SIFU_API UBoolCameraMixerBlender : public UOverTimeCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bInversed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDuration;
    
    UPROPERTY(EditDefaultsOnly)
    ESCBlendType m_eBlendType;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_Curve;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bConstantSpeed;
    
    UFUNCTION(BlueprintPure)
    bool GetOldValue() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_GetBool(UCameraComponentThird* _camera, bool _bNoDamping) const;
    
    UBoolCameraMixerBlender();
};

