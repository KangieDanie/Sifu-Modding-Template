#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG TextBlock
#include "Components/TextBlock.h"
#include "FloatStatTextBlock.generated.h"

class UColorComparisonProfile;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FFloatStatTextBlockStatDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FFloatStatTextBlockCompareStatDelegate);

UCLASS()
class UFloatStatTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Stat;
    
    UPROPERTY()
    FFloatStatTextBlockStatDelegate StatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CompareStat;
    
    UPROPERTY()
    FFloatStatTextBlockCompareStatDelegate CompareStatDelegate;
    
    UPROPERTY(EditAnywhere)
    UColorComparisonProfile* m_ColorComparisonProfile;
    
    UPROPERTY(EditAnywhere)
    bool m_bHightIsBetter;
    
    UPROPERTY(EditAnywhere)
    FText m_EmptyText;
    
    UPROPERTY(EditAnywhere)
    FText m_Format;
    
    UPROPERTY(EditAnywhere)
    float m_fMultiply;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsAttributeScale;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseGrouping;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMinimumIntegralDigits;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaximumIntegralDigits;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMinimumFractionalDigits;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaximumFractionalDigits;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeNegative;
    
    UFloatStatTextBlock();
};

