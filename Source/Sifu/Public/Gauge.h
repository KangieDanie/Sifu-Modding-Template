#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "Gauge.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FGauge_fPercentageDelegate);

UCLASS(EditInlineNew)
class SIFU_API UGauge : public UHUDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPercentage;
    
private:
    UPROPERTY()
    FGauge_fPercentageDelegate m_fPercentageDelegate;
    
public:
    UGauge();
};

