#pragma once
#include "CoreMinimal.h"
#include "AttackRequest.h"
#include "NetOrderStruct.h"
#include "AttackDataRow.h"
#include "NetOrderStructAttack.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAttack : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttackRequest m_AttackRequest;
    
    UPROPERTY(BlueprintReadOnly)
    FAttackDataRow m_AttackData;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsMirrorAnimToUse;
    
    SIFU_API FNetOrderStructAttack();
};

