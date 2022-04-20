#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "EQuadrantTypes.h"
#include "NetOrderStructChargeBuildUp.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructChargeBuildUp : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiCapLevel;
    
    UPROPERTY(BlueprintReadOnly)
    EQuadrantTypes m_eAttackQuadrant;
    
    SIFU_API FNetOrderStructChargeBuildUp();
};

