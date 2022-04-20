#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "ParryRequestInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FParryRequestInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(BlueprintReadWrite)
    ESCCardinalPoints m_eCardinal;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bFromDown;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bHasAWeapon;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIsWeaponOnOppositeHand;
    
    FParryRequestInfos();
};

