#pragma once
#include "CoreMinimal.h"
#include "OrderParams.h"
#include "NetOrderStructAttack.h"
#include "OrderAttackParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UOrderAttackParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNetOrderStructAttack m_Params;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FNetOrderStructAttack m_TransientParams;
    
    UOrderAttackParams();
};

