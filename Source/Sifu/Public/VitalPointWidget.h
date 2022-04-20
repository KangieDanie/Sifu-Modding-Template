#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "VitalPointWidget.generated.h"

class AVitalPointActor;

UCLASS(EditInlineNew)
class SIFU_API UVitalPointWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    AVitalPointActor* BPF_GetVitalPointActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnVitalPointActorSet(AVitalPointActor* _vitalPointOwner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnVitalPointActorRemove(AVitalPointActor* _vitalPointPreviousOwner);
    
    UVitalPointWidget();
};

