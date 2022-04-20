#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SCUserWidget.h"
//CROSS-MODULE INCLUDE: SCCore ESCType
#include "ESCType.h"
#include "BlendableWidget.generated.h"

class UMaterialParameterCollection;

UCLASS(EditInlineNew)
class SIFU_API UBlendableWidget : public USCUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fBlendDuration;
    
    UPROPERTY(EditAnywhere)
    ESCType m_eBlendValueType;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_ColorStart;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_ColorEnd;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StartTimerBlend(bool _bReverse);
    
protected:
    UFUNCTION(BlueprintPure)
    float BPF_GetBlendedFloat() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor BPF_GetBlendedColor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 BPF_BindMaterialParameterToBlendAlpha(UMaterialParameterCollection* _collection, FName _parameterName);
    
    UBlendableWidget();
};

