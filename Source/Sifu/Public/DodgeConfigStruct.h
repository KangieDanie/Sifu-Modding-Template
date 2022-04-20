#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "DodgeConfigStruct.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDodgeConfigStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDurationArray[4];
    
    UPROPERTY(EditAnywhere)
    float m_fMovementLengthArray[4];
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideAnimDynamicByCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_OverrideDodgeDynamicCurve;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameBuildUp;
    
    UPROPERTY(EditAnywhere)
    int32 m_iNbFrameDodgeWindowMiddle;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameInterruptibleRelease;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameRelease;
    
    UPROPERTY(EditAnywhere)
    bool m_bHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardGaugeCost;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceDirOnNeutralDodge;
    
    UPROPERTY(EditAnywhere)
    ESCCardinalPoints m_eForcedCardinalDirOnNeutralDodge;
    
    SIFU_API FDodgeConfigStruct();
};

