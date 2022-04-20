#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsModule.h"
#include "InputCoreTypes.h"
#include "SCVisualLoggerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SCCORE_API USCVisualLoggerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSet<FName> m_SetAllowDebugBones;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<FName> m_SetAllowDebugBonesDrawTransform;
    
    UPROPERTY(Config, EditAnywhere)
    FKey m_SnapshotKey;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fAIMaxDistance;
    
    USCVisualLoggerSettings();
};

