#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "EFactionsEnums.h"
#include "TargetableActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class SIFU_API UTargetableActor : public UInterface {
    GENERATED_BODY()
};

class SIFU_API ITargetableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidTarget(const AActor* _targeter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EFactionsEnums GetFaction() const;
    
};

