#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EPushObstacleReaction.h"
#include "HitBox.h"
#include "PushedObstacleComponent.generated.h"

class AFightingCharacter;
class UPushedObstacleComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPushedObstacleComponent_OnPushDetected, UPushedObstacleComponent*, _component, AFightingCharacter*, _pushedPlayer);

UCLASS(Blueprintable)
class UPushedObstacleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bActive;
    
    UPROPERTY(EditAnywhere)
    EPushObstacleReaction m_ePushReaction;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintAssignable)
    FPushedObstacleComponent_OnPushDetected m_OnPushDetected;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPushInterruption(AFightingCharacter* _interruptedCharacter);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    EPushObstacleReaction BPE_GetPushReaction(AFightingCharacter* _pushedPlayer);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_GetPushInterruptionHit(AFightingCharacter* _interruptedCharacter, FHitBox& _inOutResult);
    
    UPushedObstacleComponent();
};

