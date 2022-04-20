#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EGlobalBehaviors.h"
#include "AIBehaviorSwitchActorComponent.generated.h"

class ASpawnerGroup;
class AActor;

UCLASS(BlueprintType)
class SIFU_API UAIBehaviorSwitchActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<ASpawnerGroup*> m_groupsToAlert;
    
    UPROPERTY(EditAnywhere)
    bool m_AlertOnPrimitiveOverlap;
    
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_eNewBehavior;
    
    UFUNCTION()
    void OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_TriggerBehaviorChangeToAssociatedGroups(AActor* _actorTriggeringTheAlert, bool _bSkipBark) const;
    
    UAIBehaviorSwitchActorComponent();
};

