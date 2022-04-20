#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "OrderFallFromPushedDB.generated.h"

UCLASS()
class SIFU_API UOrderFallFromPushedDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bRedirectToSlopeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDelayBeforeEnteringFallFromPushed;
    
    UOrderFallFromPushedDB();
};

