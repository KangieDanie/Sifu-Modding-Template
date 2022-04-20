#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Styling/SlateColor.h"
#include "ComboWidgetData.generated.h"

class USpecialAttackData;

UCLASS(BlueprintType)
class SIFU_API UComboWidgetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateColor m_RegularAttackNormalTint;
    
    UPROPERTY(EditAnywhere)
    FSlateColor m_RegularAttackNextTint;
    
    UPROPERTY(EditAnywhere)
    FSlateColor m_RegularAttackInactiveTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_RegularAttackCurrentTint;
    
    UPROPERTY(EditAnywhere)
    FSlateColor m_AlternativeAttackNormalTint;
    
    UPROPERTY(EditAnywhere)
    FSlateColor m_AlternativeAttackNextTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_AlternativeAttackFinishedTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_BlackEnlighted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_BlackDarkened;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_WhiteEnlighted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_WhiteDarkened;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_ErrorTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USpecialAttackData* m_SpecialAttackData;
    
    UComboWidgetData();
};

