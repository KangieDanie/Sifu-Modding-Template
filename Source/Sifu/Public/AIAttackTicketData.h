#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "AttackTicketConfig.h"
#include "AIAttackTicketData.generated.h"

UCLASS()
class SIFU_API UAIAttackTicketData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackTicketConfig m_Config;
    
    UAIAttackTicketData();
};

