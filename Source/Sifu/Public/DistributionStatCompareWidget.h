#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "DistributionStatCompareWidget.generated.h"

class UPreviewData;
class UStatsComponent;

UCLASS(EditInlineNew)
class UDistributionStatCompareWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UPreviewData* m_PreviewData;
    
public:
    UFUNCTION(BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent();
    
    UFUNCTION(BlueprintPure)
    UPreviewData* BPF_GetPreviewData() const;
    
    UDistributionStatCompareWidget();
};

