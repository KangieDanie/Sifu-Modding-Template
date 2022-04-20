#pragma once
#include "CoreMinimal.h"
#include "OrderParams.h"
#include "NetOrderStructPlayAnim.h"
#include "OrderPlayAnimParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UOrderPlayAnimParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNetOrderStructPlayAnim m_Params;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FNetOrderStructPlayAnim m_TransientParams;
    
    UOrderPlayAnimParams();
};

