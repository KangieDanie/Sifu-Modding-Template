#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
//CROSS-MODULE INCLUDE: Engine CollisionProfileName
#include "Engine/CollisionProfile.h"

#include "FallOnSlopeConfiguration.h"
#include "ERagdollMeshOrientation.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "OrderFallOnSlopeDB.generated.h"

class UPhysicsAsset;
class UAnimSequence;
//class UAkRtpc;
class UObject;
class UPhysicalMaterial;

UCLASS()
class SIFU_API UOrderFallOnSlopeDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bPhysicAnimEnabled;
    
    UPROPERTY(EditAnywhere)
    FFallOnSlopeConfiguration m_SlopeConfiguration;
    
    UPROPERTY(EditAnywhere)
    FFallOnSlopeConfiguration m_GroundConfiguration;
    
    UPROPERTY(EditAnywhere)
    float m_fFallVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fSlopeGroundAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fSlopeRampAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    FName m_PhysicalAnimationProfile;
    
    UPROPERTY(EditAnywhere)
    float m_fActorRotationFromPelvisForward;
    
    UPROPERTY(EditAnywhere)
    float m_fFloorDetectionLengthFromPelvis;
    
    UPROPERTY(EditAnywhere)
    float m_fPelvisVerticalOffset;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName m_RagdollCollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* m_PhysicAsset;
    
    UPROPERTY(EditAnywhere)
    float m_fStartupDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fVelocityPushCoef;
    
    UPROPERTY(EditAnywhere)
    float m_fTotalMaxDuration;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Loop;
    
    UPROPERTY(EditAnywhere)
    TMap<ERagdollMeshOrientation, FAnimContainer> m_RecoveryAnims;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayInstantRecoveryAnim;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayInstantRecoveryAnimOnPlaneGround;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_InstantRecoveryAnim;
    
    UPROPERTY(EditAnywhere)
    FName m_PoseSnapshotName;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorFallOnRightSide;
    
   /* UPROPERTY(EditAnywhere)
    UAkRtpc* m_RTCPSpeed;*/
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_RTCPMinMaxVelocity;
    
    UPROPERTY(EditAnywhere)
    FName m_RTPCName;
    
    UPROPERTY(EditAnywhere)
    bool m_bCallRTPCOnSelf;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StopBodyRollLoop(UObject* _owner, uint8 _uiOrderId) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StartBodyRollLoop(UObject* _owner, uint8 _uiOrderId, const UPhysicalMaterial* _floorMaterial, bool _bInitialTrace) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_BodyRollLoopMaterialSwitch(UObject* _owner, uint8 _uiOrderId, const UPhysicalMaterial* _floorMaterial) const;
    
    UOrderFallOnSlopeDB();
};

