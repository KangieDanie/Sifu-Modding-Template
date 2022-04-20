#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SCActorManager.generated.h"

class AActor;

UCLASS()
class SIFU_API USCActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnActorDestroyed(AActor* _actorDestroyed);
    
public:
    USCActorManager();
};

