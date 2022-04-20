#include "DistributionStatCompareWidget.h"

class UStatsComponent;
class UPreviewData;

UStatsComponent* UDistributionStatCompareWidget::BPF_GetStatsComponent() {
    return NULL;
}

UPreviewData* UDistributionStatCompareWidget::BPF_GetPreviewData() const {
    return NULL;
}

UDistributionStatCompareWidget::UDistributionStatCompareWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_PreviewData = NULL;
}

