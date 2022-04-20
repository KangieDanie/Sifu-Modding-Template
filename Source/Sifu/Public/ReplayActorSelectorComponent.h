#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ReplayActorSelectorComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayActorSelectorComponent_OnReceiveTraceResult, bool, _bHasHit, float, _fDistance);

UCLASS(BlueprintType)
class SIFU_API UReplayActorSelectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FReplayActorSelectorComponent_OnReceiveTraceResult m_OnReceiveTraceResult;
    
    UFUNCTION(BlueprintCallable)
    void BPF_RequestTrace();
    
public:
    UReplayActorSelectorComponent();
};

