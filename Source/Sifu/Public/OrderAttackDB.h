#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "OrderAttackDB.generated.h"

UCLASS()
class SIFU_API UOrderAttackDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fRepulsionSpeed;
    
    UOrderAttackDB();
};

