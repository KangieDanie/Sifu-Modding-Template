#pragma once
#include "CoreMinimal.h"
#include "ECameraMirrorManagementType.h"
//CROSS-MODULE INCLUDE: SCCore ESCBlendType
#include "ESCBlendType.h"
#include "CameraMirrorManagementConfig.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraMirrorManagementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraMirrorManagementType m_eMirrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSpringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInstantSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCBlendType m_eBlenderBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_BlenderCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fBlenderDuration;
    
    FCameraMirrorManagementConfig();
};

