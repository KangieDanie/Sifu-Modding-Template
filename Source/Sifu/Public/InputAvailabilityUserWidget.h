#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "InputAction.h"
#include "InputAvailabilityUserWidget.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FInputAvailabilityUserWidgetDelegate, bool&, _bOutAvailable);

UCLASS(EditInlineNew)
class SIFU_API UInputAvailabilityUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    InputAction m_eInputAction;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputAvailabilityOverride(FInputAvailabilityUserWidgetDelegate _delegate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAvailabilityUpdated(bool _bAvailable);
    
public:
    UInputAvailabilityUserWidget();
};

