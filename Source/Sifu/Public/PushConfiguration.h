#pragma once
#include "CoreMinimal.h"
#include "PushTraversalAnimContainer.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TraversalInfo.h"
#include "PushAnims.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "HitBox.h"
#include "PushConfiguration.generated.h"

class AFightingCharacter;
class UBaseEnvironmentalInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UPushConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fPushEnvRedirectionLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fExpectedSnapDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fLandingDistanceFromFloorToConsidereFall;
    
    UPROPERTY(EditAnywhere)
    float m_fDistanceFromEdgeToTestFloorHeight;
    
    UPROPERTY(EditAnywhere)
    float m_fFloorSearchDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fHeightSearchDistanceOnNormal;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetPushCloseTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, AFightingCharacter* _Instigator, AFightingCharacter* _victim, FPushTraversalAnimContainer& _outOnVoidResult) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_GetPushCloseAnimOnTraversal(AFightingCharacter* _Instigator, AFightingCharacter* _victim, const FTraversalInfo& _traversalInfo, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_GetPushCloseAnimOnImpactHeight(AFightingCharacter* _Instigator, AFightingCharacter* _victim, float _fHeight, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetPushCloseAnimOnEnv(AFightingCharacter* _Instigator, AFightingCharacter* _victim, UBaseEnvironmentalInteractionComponent* _env, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetPushAnims(AFightingCharacter* _Instigator, AFightingCharacter* _victim, FPushAnims& _outAnims, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap) const;
    
    UPushConfiguration();
};

