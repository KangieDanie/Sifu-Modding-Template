#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "SCPoolableActorComponent.h"
#include "GameplayTagContainer.h"
#include "SCBehaviorTreeComponent.generated.h"

class UBehaviorTree;

UCLASS()
class SCCORE_API USCBehaviorTreeComponent : public UBehaviorTreeComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGameplayTag, UBehaviorTree*> m_DynamicSubtrees;
    
public:
    USCBehaviorTreeComponent();
    
    // Fix for true pure virtual functions not being implemented
};

