#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG TextBlock
#include "Components/TextBlock.h"
#include "IntStatTextBlock.generated.h"

class UColorComparisonProfile;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(int32, FIntStatTextBlockStatDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(int32, FIntStatTextBlockCompareStatDelegate);

UCLASS()
class UIntStatTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StatIncrement;
    
    UPROPERTY()
    FIntStatTextBlockStatDelegate StatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompareStat;
    
    UPROPERTY()
    FIntStatTextBlockCompareStatDelegate CompareStatDelegate;
    
    UPROPERTY(EditAnywhere)
    UColorComparisonProfile* m_ColorComparisonProfile;
    
    UPROPERTY(EditAnywhere)
    bool m_bHightIsBetter;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeNegative;
    
    UIntStatTextBlock();
};

