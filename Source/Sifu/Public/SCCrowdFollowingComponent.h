#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule CrowdFollowingComponent
#include "Navigation/CrowdFollowingComponent.h"
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "EGlobalBehaviors.h"
#include "SCCrowdFollowingComponent.generated.h"

UCLASS()
class SIFU_API USCCrowdFollowingComponent : public UCrowdFollowingComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
public:
    USCCrowdFollowingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

