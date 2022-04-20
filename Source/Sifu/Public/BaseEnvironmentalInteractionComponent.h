#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructTakedown.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EPushObstacleReaction.h"
#include "BaseEnvironmentalInteractionComponent.generated.h"

class AFightingCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBaseEnvironmentalInteractionComponent_OnImpact, AFightingCharacter*, _takenDown, const FNetOrderStructTakedown&, _takedownInfos);

UCLASS(Abstract, Blueprintable)
class UBaseEnvironmentalInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBaseEnvironmentalInteractionComponent_OnImpact m_OnImpact;
    
    UPROPERTY(EditAnywhere)
    bool m_bActive;
    
    UPROPERTY(EditAnywhere)
    EPushObstacleReaction m_eReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAllowedInteractionTypes;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTakedownStarted(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown);
    
    UFUNCTION(BlueprintNativeEvent)
    EPushObstacleReaction BPE_GetPushReaction(const AFightingCharacter* _Instigator, const AFightingCharacter* _takenDown);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_CanTakeDown(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown);
    
    UBaseEnvironmentalInteractionComponent();
};

