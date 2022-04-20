#pragma once
#include "CoreMinimal.h"
#include "UsableItem.h"
#include "ShockWaveDamageItem.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API AShockWaveDamageItem : public AUsableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* m_KnockbackCoefOverDistToInstig;
    
public:
    AShockWaveDamageItem();
};

