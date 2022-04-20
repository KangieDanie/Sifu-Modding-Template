#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EGameOptionTypes.h"
#include "OptionListenerComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionListenerComponentOnOptionChanged, EGameOptionTypes, _eOptionType);

UCLASS(Blueprintable)
class SIFU_API UOptionListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOptionListenerComponentOnOptionChanged OnOptionChanged;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnOptionChanged(EGameOptionTypes _eOptionType);
    
public:
    UOptionListenerComponent();
};

