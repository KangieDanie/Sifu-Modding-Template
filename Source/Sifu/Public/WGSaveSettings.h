#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SaveSettings
#include "SaveSettings.h"
#include "GameOptionMappingRange.h"
#include "WGSaveSettings.generated.h"

class UCharacterBuildDB;

UCLASS()
class SIFU_API UWGSaveSettings : public USaveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    TSoftObjectPtr<UCharacterBuildDB> m_DefaultBuild;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FGameOptionMappingRange m_GameOptionValue[37];
    
    UWGSaveSettings();
};

