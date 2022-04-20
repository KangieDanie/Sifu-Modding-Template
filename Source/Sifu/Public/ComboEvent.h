#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ComboEvent.generated.h"

class AFightingCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboEvent : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_GetLog();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_Execute(AFightingCharacter* _character);
    
    UComboEvent();
};

