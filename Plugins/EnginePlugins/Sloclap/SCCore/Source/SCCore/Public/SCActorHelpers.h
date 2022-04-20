#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCActorHelpers.generated.h"

class AActor;

UCLASS(BlueprintType)
class SCCORE_API USCActorHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static AActor* BPF_GetClosestActor(AActor* _target, TArray<AActor*> _actors);
    
    USCActorHelpers();
};

