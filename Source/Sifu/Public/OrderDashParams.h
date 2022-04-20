#pragma once
#include "CoreMinimal.h"
#include "OrderParams.h"
#include "NetOrderStructDash.h"
#include "OrderDashParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UOrderDashParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNetOrderStructDash m_Params;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FNetOrderStructDash m_TransientParams;
    
    UOrderDashParams();
};

