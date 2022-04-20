#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "BindableMaterialWidget.generated.h"

class UMaterialInstanceDynamic;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FBindableMaterialWidgetFloatValueDelegate);

UCLASS(EditInlineNew)
class UBindableMaterialWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_FloatParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FloatValue;
    
    UPROPERTY()
    FBindableMaterialWidgetFloatValueDelegate FloatValueDelegate;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterialInstance(UMaterialInstanceDynamic* _materialInstance);
    
public:
    UBindableMaterialWidget();
};

