#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TargetableActorHelper.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UTargetableActorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FVector BPF_GetTargetableLocation(const AActor* _actor);
    
    UTargetableActorHelper();
};

