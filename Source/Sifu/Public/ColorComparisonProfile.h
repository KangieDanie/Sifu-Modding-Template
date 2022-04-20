#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Styling/SlateColor.h"
#include "ColorComparisonProfile.generated.h"

UCLASS(BlueprintType)
class SIFU_API UColorComparisonProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_BonusTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_MalusTint;
    
    UColorComparisonProfile();
};

