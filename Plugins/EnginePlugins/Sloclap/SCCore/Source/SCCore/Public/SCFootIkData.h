#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "SCFootIkData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCFootIkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName m_footIkBoneName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName m_thighBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_suffix;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_markerName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vDampedWorldLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bApplyIkToFoot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_dampedWorldRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fRotationAlpha;
    
    FSCFootIkData(){};
};

