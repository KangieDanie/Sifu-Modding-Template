#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "EAnalogInputReferenceDirection.h"
#include "AnalogInputSequenceStep.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnalogInputSequenceStep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_SizeTolerance;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_VelocityFromRefDirTolerance;
    
    UPROPERTY(EditAnywhere)
    bool m_bAbsAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_AngleDegTolerance;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fHoldDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxValidityDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsReferenceDirection;
    
    UPROPERTY(EditAnywhere)
    EAnalogInputReferenceDirection m_eReferenceDirBehavior;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsResultDirection;
    
    UPROPERTY(EditAnywhere)
    bool m_bParallelizeOnValidation;
    
    FAnalogInputSequenceStep();
};

