#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "FixedCameraWeightComponent.h"
#include "StateWeight.h"
#include "EGlobalBehaviors.h"
#include "FightingCameraWeightComponent.generated.h"

UCLASS()
class SIFU_API UFightingCameraWeightComponent : public UFixedCameraWeightComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bClampAdditiveWeight;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAbsAdditiveWeight;
    
    UPROPERTY(EditAnywhere)
    FStateWeight m_fightingStateWeights[9];
    
    UPROPERTY(EditAnywhere)
    float m_fDialogInvolvedAdditiveWeight;
    
    UPROPERTY(EditAnywhere)
    float m_fDialogSpeakerAdditiveWeight;
    
public:
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
    UFightingCameraWeightComponent();
    
    // Fix for true pure virtual functions not being implemented
};

