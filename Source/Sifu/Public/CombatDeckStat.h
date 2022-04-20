#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Styling/SlateColor.h"
#include "CombatDeckStat.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCombatDeckStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fAverage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString m_AverageString;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fRating;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSlateColor m_ComparisonColor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSlateColor m_RatingComparisonColor;
    
    FCombatDeckStat();
};

