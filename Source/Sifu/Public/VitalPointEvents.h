#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "VitalPointEvents.generated.h"

class UVitalPointData;
class AFightingCharacter;

UCLASS(Blueprintable)
class UVitalPointEvents : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnWillExecute(const UVitalPointData* _vitalPoint, AFightingCharacter* _Instigator, AFightingCharacter* _victim, bool& _bOutShouldDismiss) const;
    
    UVitalPointEvents();
};

