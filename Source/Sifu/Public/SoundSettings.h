#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: DeveloperSettings DeveloperSettings
//CROSS-MODULE INCLUDE: AkAudio AkChannelConfiguration
//#include "AkChannelConfiguration.h"
#include "SoundSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SIFU_API USoundSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableSoundMoods;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_MasterVolume;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_MusicVolume;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_SFXVolume;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_GameplaySFXState;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_GameplaySFXStateOn;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_GameplaySFXStateOff;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_DialogVolume;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_AdvancedVibrationStrengthRTPC;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_AdvancedVibrationState;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_AdvancedVibrationStateON;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_AdvancedVibrationStateOFF;
    
   /* UPROPERTY(Config, EditAnywhere)
    AkChannelConfiguration m_eDefaultChannelConfig;*/
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> m_HandlingMonoBusList;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_VoiceArchetypeSwitchGroup;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_VoiceVariationSwitchGroup;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_VoiceGenderSwitchGroup;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_VoiceGenderSwitchValues[2];
    
    USoundSettings();
};

