#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AssociatedActorGetter.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class SCCORE_API UAssociatedActorGetter : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    AActor* BPE_GetAssociatedActor(AActor* _inActor) const;
    
    UAssociatedActorGetter();
};

