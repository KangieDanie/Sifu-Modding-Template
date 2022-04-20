#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule AIController
#include "AIController.h"
//CROSS-MODULE INCLUDE: SCCore SCPoolableActor
#include "SCPoolableActor.h"
#include "FightingAIController.generated.h"

class AActor;
class AAISpawner;

UCLASS()
class SIFU_API AFightingAIController : public AAIController, public ISCPoolableActor {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnPerceptionUpdate(const TArray<AActor*>& _updatedActors);
    
    UFUNCTION()
    void AiSpawned(AAISpawner* _spawner);
    
public:
    AFightingAIController();
    
    // Fix for true pure virtual functions not being implemented
};

