#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RagdollMoveableBone.h"
#include "SCRagdollConfigDB.generated.h"

class UCurveFloat;

UCLASS()
class SCCORE_API USCRagdollConfigDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDetectionRadius;
    
    UPROPERTY(EditAnywhere)
    float m_fBoneDetectionRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<FRagdollMoveableBone> m_MoveableBones;
    
    UPROPERTY(EditAnywhere)
    float m_fForceFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fDelayBetweenImpulses;
    
    UPROPERTY(EditAnywhere)
    float m_fMinimumPlayerVelocity;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PlayerVelocityCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fDetectionFrequency;
    
    UPROPERTY(EditAnywhere)
    float m_fDelayBeforeSleep;
    
    USCRagdollConfigDB();
};

