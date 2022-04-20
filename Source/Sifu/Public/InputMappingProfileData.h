#pragma once
#include "CoreMinimal.h"
#include "InputPresetsEnumHandler.h"
#include "InputContext.h"
#include "InputMappingData.h"
#include "InputMappingGroup.h"
#include "InputMappingProfileData.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    bool m_IsSet;
    
    UPROPERTY(SaveGame)
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;
    
    UPROPERTY(SaveGame)
    TMap<InputContext, FInputMappingGroup> m_MappingPerContext;
    
    SIFU_API FInputMappingProfileData();
};

