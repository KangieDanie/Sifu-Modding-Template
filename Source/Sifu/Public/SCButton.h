#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: UMG Button
#include "SCButton.generated.h"


class USCButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCButtonOnFocusReceived, USCButton*, _buttonFocused);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCButtonOnFocusLost, USCButton*, _buttonUnfocused);

UCLASS()
class SIFU_API USCButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSCButtonOnFocusReceived OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable)
    FSCButtonOnFocusLost OnFocusLost;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetOverrideFocusTints(FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
    USCButton();
};

