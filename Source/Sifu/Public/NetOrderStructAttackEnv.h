#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "NetOrderStructSnapAnim.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "HitBox.h"
#include "NetOrderStructAttackEnv.generated.h"

class UBaseEnvironmentalInteractionComponent;

USTRUCT(BlueprintType)
struct FNetOrderStructAttackEnv : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform m_Snap;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UBaseEnvironmentalInteractionComponent> m_EnvironementalTakedownComponent;
    
    UPROPERTY(BlueprintReadOnly)
    EOrderType m_eTargetOrder;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_Impact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_Hit;
    
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_EnvHit;
    
    SIFU_API FNetOrderStructAttackEnv();
};

