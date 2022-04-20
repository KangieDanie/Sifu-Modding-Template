#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InputPresetsEnumHandler.h"
#include "InputMappingData.h"
#include "InputMappingPresets.generated.h"

UCLASS()
class UInputMappingPresets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;
    
    UInputMappingPresets();
};

