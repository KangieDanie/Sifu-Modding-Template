#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderDB.h"
#include "AvailabilityLayerContainer.h"
#include "OrderAvoidedDB.generated.h"

class UOrderServiceActivationConditions;

UCLASS()
class SIFU_API UOrderAvoidedDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderServiceActivationConditions> m_activationCondition;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertCondition;
    
    UPROPERTY(EditAnywhere)
    FAvailabilityLayerContainer m_AvailabilityInfo;
    
    UOrderAvoidedDB();
};

