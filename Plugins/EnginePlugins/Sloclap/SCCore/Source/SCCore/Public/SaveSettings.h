#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DeveloperSettingsModule.h"
#include "SaveSettings.generated.h"

class USCSaveObjectGameData;
class USCSaveObjectPlayerProfile;

UCLASS(Abstract, DefaultConfig, Config=Save)
class SCCORE_API USaveSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    bool m_bEnabled;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString m_DefaultSaveName;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString m_DefaultProfileName;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString m_DefaultAudioCulture;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString m_DefaultTextCulture;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TSubclassOf<USCSaveObjectGameData> m_SaveGameObjectType;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TSubclassOf<USCSaveObjectPlayerProfile> m_SaveProfileObjectType;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float m_fMaxBlockingSaveDuration;
    
    USaveSettings();
};

