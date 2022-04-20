#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CancelAnimContainerQuadrantArray.h"
#include "CancelDB.generated.h"

class UCurveFloat;
class UAvailabilityLayerData;

UCLASS()
class SIFU_API UCancelDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fCancelReorientationDuration;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CancelReorientationCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CancelDisplacementCurve;
    
    UPROPERTY(EditAnywhere)
    FCancelAnimContainerQuadrantArray m_AnimContainerArray;
    
    UPROPERTY(EditAnywhere)
    float m_fCancelDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fCancelGuardGaugeCost;
    
    UPROPERTY(EditAnywhere)
    bool m_bCancelHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere)
    float m_fCancelWindowDuration;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_CancelInterruptibleReleaseLayer;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameInterruptibleRelease;
    
    UCancelDB();
};

