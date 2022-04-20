#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "NetOrderStructTraversal.h"
#include "OrderTraversalDB.generated.h"

UCLASS()
class SIFU_API UOrderTraversalDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bCanBeHitted;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HittedFallOnSlopeEntryAnim(const FNetOrderStructTraversal& _netOrderStruct, FAnimContainer& _outResult) const;
    
    UOrderTraversalDB();
};

