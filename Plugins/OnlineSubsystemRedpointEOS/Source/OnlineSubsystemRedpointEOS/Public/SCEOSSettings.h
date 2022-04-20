#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsModule.h"
#include "SCEOSSettings.generated.h"

UCLASS(DefaultConfig, Config=SCCore)
class ONLINESUBSYSTEMREDPOINTEOS_API USCEOSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FString> Entitlements;
    
    USCEOSSettings();
};

