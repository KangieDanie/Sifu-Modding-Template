#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsModule.h"
#include "Engine/EngineTypes.h"
#include "SCDialogPerUserSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class SCDIALOGMANAGERPLUGIN_API USCDialogPerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath m_DialogProjectPath;
    
    USCDialogPerUserSettings();
};

