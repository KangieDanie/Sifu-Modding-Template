#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructSnapAnim.h"
#include "OverridingHitBox.h"
#include "NetOrderStructSynchronizedAttackVictim.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructSynchronizedAttackVictim : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FOverridingHitBox> m_Hits;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bCanCounterGrab;
    
    SIFU_API FNetOrderStructSynchronizedAttackVictim();
};

