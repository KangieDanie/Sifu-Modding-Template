#pragma once
#include "CoreMinimal.h"
#include "OrderParams.h"
#include "NetOrderStructWallJumpAttack.h"
#include "OrderWallJumpAttackParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UOrderWallJumpAttackParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNetOrderStructWallJumpAttack m_Params;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FNetOrderStructWallJumpAttack m_TransientParams;
    
    UOrderWallJumpAttackParams();
};

