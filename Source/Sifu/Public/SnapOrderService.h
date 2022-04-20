#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "OrderService.h"
#include "BPOrderServiceInstance.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SnapOrderService.generated.h"

class UCurveFloat;
class AFightingCharacter;
class USnapOrderService;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSnapOrderServiceDelegate, const FBPOrderServiceInstance&, _instance, bool&, _bOutSuccess, FTransform&, _result);

UCLASS(EditInlineNew)
class SIFU_API USnapOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bNeedTargetActor;
    
    UPROPERTY(EditAnywhere)
    bool m_bTickBeforeTargetActor;
    
    UPROPERTY(EditAnywhere)
    bool m_bMimicTargetFloorDist;
    
    UPROPERTY(EditAnywhere)
    FName m_SelfBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_TranslationCurve;
    
    UPROPERTY(EditAnywhere)
    FName m_RotationCurve;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseSelfBoneRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fSelfBoneRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fTargetRotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bSnapSelfBoneToGround;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetBoneName;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Dynamic;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseTransitionFrames;
    
    UPROPERTY(EditAnywhere)
    float m_fTransitionFrames;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_TransitionUntilOrderService;
    
    UPROPERTY(EditAnywhere)
    bool m_bStopWhenTransitionOrderServiceStarted;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_StartSnappingAfterTargetService;
    
    UPROPERTY(EditAnywhere)
    bool m_bDisableCollisions;
    
    UPROPERTY(EditAnywhere)
    bool m_bDisableCollisionsWithStaticMesh;
    
    UPROPERTY(EditAnywhere)
    bool m_bPredictTargetRedirection;
    
    UPROPERTY(EditAnywhere)
    bool m_bPredictTargetSnap;
    
    UPROPERTY(EditAnywhere)
    bool m_bSnapTranslationFollowDynamicCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_SnapTranslationDynamic;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceLinearSnap;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSnapSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxCumulatedDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxCumulatedAngularDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDistanceToNavmesh;
    
    UPROPERTY(EditAnywhere)
    FVector m_vWorldOffsetOnTargetPos;
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCustomSnapOrderServiceTransform(const FTransform& _transform, TSubclassOf<USnapOrderService> _serviceClass, const AFightingCharacter* _character, uint8 _uiOrderId);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindTargetTransformDelegate(const FBPOrderServiceInstance& _self, const FBPOrderServiceInstance& _targetServiceInstance, const FSnapOrderServiceDelegate& _delegate);
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady) const;
    
    USnapOrderService();
};

