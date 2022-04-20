#pragma once
#include "CoreMinimal.h"
#include "EAIDefendedAttackType.h"
#include "AIDefenseTargetAttackInfos.generated.h"

USTRUCT(BlueprintType)
struct FAIDefenseTargetAttackInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EAIDefendedAttackType m_eType;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiHitBoxIndex;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiOrderID;
    
    SIFU_API FAIDefenseTargetAttackInfos();
};

