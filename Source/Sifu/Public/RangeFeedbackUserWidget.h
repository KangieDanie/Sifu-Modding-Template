#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "RangeFeedbackUserWidget.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class SIFU_API URangeFeedbackUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* m_RemappingCurve;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fMinDefaultValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fMaxDefaultValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fDefaultAlpha;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDefaultValuesSet();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DisplayRangeValueFeedback(float _fValueAlpha);
    
public:
    URangeFeedbackUserWidget();
};

