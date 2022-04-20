#pragma once
#include "CoreMinimal.h"
#include "UsableItem.h"
#include "TargetAOEItem.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API ATargetAOEItem : public AUsableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 m_iTracksAvoidFakeTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* m_KnockbackCoefOverDistToInstig;
    
public:
    ATargetAOEItem();
};

