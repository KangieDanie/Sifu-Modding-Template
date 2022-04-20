#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "EWallJumpAttackPhase.h"
#include "NetOrderStructWallJumpAttack.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructWallJumpAttack : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWallJumpAttackPhase m_eCurrentWallJumpPhase;
    
    SIFU_API FNetOrderStructWallJumpAttack();
};

