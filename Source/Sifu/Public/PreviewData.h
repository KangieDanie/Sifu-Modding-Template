#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Styling/SlateColor.h"
#include "PreviewData.generated.h"

UCLASS(BlueprintType)
class SIFU_API UPreviewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_RatingBonusTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_RatingPenaltyTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_RatingNormalTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_PreviewBonusTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_PreviewPenaltyTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_NormalTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor m_ScaleTint;
    
    UFUNCTION(BlueprintPure)
    FSlateColor BPF_GetColorForScaleComparison(float _fBase, float _fPreview) const;
    
    UFUNCTION(BlueprintPure)
    FSlateColor BPF_GetColorForRatingComparison(float _fBase, float _fPreview) const;
    
    UFUNCTION(BlueprintPure)
    FSlateColor BPF_GetColorForComparison(float _fBase, float _fPreview) const;
    
    UPreviewData();
};

