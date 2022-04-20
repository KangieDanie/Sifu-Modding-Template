#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "HitDefenseResult.generated.h"

class USpecialAbilityPropertyDB;

USTRUCT(BlueprintType)
struct FHitDefenseResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    EOrderType m_eDefenseOrder;
    
    UPROPERTY(Transient)
    uint8 m_uiOrderID;
    
    UPROPERTY(Transient)
    uint8 m_uiDefenseType;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bHitDismissed;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bResultRemoved;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USpecialAbilityPropertyDB* m_DB;
    
    SIFU_API FHitDefenseResult();
};

