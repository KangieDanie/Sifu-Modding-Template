#pragma once
#include "CoreMinimal.h"
#include "OrderParams.h"
#include "NetOrderStructTraversal.h"
#include "ETraversalEntryType.h"
#include "OrderTraversalParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UOrderTraversalParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNetOrderStructTraversal m_Params;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FNetOrderStructTraversal m_TransientParams;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ETraversalEntryType m_eForceEntryType;
    
    UOrderTraversalParams();
};

