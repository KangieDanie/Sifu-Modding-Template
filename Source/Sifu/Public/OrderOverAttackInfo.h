#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
#include "HitDefenseResult.h"
#include "EOrderType.h"
#include "OrderOverAttackInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOrderOverAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    FHitDefenseResult m_DefenseResult;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_HitRequest;
    
    UPROPERTY(BlueprintReadOnly)
    EOrderType m_eOrderType;
    
    SIFU_API FOrderOverAttackInfo();
};

