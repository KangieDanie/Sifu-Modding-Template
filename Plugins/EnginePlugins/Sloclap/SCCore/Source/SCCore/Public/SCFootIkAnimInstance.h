#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAnimInstance.h"
#include "SCFootIkData.h"
#include "Curves/CurveFloat.h"
#include "FootIkDamping.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCFootIkAnimInstance.generated.h"

class USCFootIkService;

UCLASS(NonTransient)
class SCCORE_API USCFootIkAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCFootIkData m_leftFootStructure;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCFootIkData m_rightFootStructure;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSlopeAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fThighToFootDistDiff;
    
    UPROPERTY(EditAnywhere)
    FName m_syncGroup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString m_footName;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString m_thighName;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString m_ikSuffix;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_bInvalidateLastGroundOnMarkerHit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_fLerpToSpringMultiplier;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_alphaCurveByRelFootPos;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EMovementMode>> m_eHandledMovementModes;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreLevelDesignCollisions;
    
    UPROPERTY(EditAnywhere)
    FFootIkDamping m_locationDamping;
    
    UPROPERTY(EditAnywhere)
    FFootIkDamping m_rotationDamping;
    
    UPROPERTY(EditAnywhere)
    float m_fRawToMarkerAlphaDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fHipsAttenuation;
    
    UPROPERTY(EditAnywhere)
    bool m_bHipsUseLerp;
    
    UPROPERTY(EditAnywhere)
    float m_fHipsDampingSpeed;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<USCFootIkService>> m_Services;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxHipsHeightDisplacement;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vHipsDisplacment;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsHipsDisplacementValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsFootIkEnabled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vLastComponentVelocity;
    
public:
    USCFootIkAnimInstance();
};

