#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: PhysicsCore ERadialImpulseFalloff
#include "Chaos/ChaosEngineInterface.h"
//CROSS-MODULE INCLUDE: Engine EObjectTypeQuery
#include "DeathRadialImpulse.generated.h"

USTRUCT(BlueprintType)
struct FDeathRadialImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImpulseVelChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleDamage;
    
    SIFU_API FDeathRadialImpulse();
};

