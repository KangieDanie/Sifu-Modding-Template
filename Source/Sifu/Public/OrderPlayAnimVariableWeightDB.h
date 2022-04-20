#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "OrderPlayAnimVariableWeightDB.generated.h"

UCLASS()
class SIFU_API UOrderPlayAnimVariableWeightDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUpdateQuadrant;
    
    UOrderPlayAnimVariableWeightDB();
};

