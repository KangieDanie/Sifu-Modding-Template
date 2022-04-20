#include "SoundSettings.h"

USoundSettings::USoundSettings() {
    this->m_bEnableSoundMoods = true;
    this->m_MasterVolume = TEXT("Master_Vol");
    this->m_MusicVolume = TEXT("Music_Vol");
    this->m_SFXVolume = TEXT("SFX_Vol");
    this->m_GameplaySFXState = TEXT("Gameplay_SFX");
    this->m_GameplaySFXStateOn = TEXT("On");
    this->m_GameplaySFXStateOff = TEXT("Off");
    this->m_DialogVolume = TEXT("Dialog_Vol");
    this->m_AdvancedVibrationStrengthRTPC = TEXT("Motion_Vol");
    this->m_AdvancedVibrationState = TEXT("MotionFeedback");
    this->m_AdvancedVibrationStateON = TEXT("On");
    this->m_AdvancedVibrationStateOFF = TEXT("Off");
//    this->m_eDefaultChannelConfig = AkChannelConfiguration::Ak_2_0;
    this->m_HandlingMonoBusList.AddDefaulted(3);
    this->m_VoiceArchetypeSwitchGroup = TEXT("Voice_Archetype");
    this->m_VoiceVariationSwitchGroup = TEXT("Voice_Variation");
    this->m_VoiceGenderSwitchGroup = TEXT("Voice_Gender");
    this->m_VoiceGenderSwitchValues[0] = TEXT("Male");
    this->m_VoiceGenderSwitchValues[1] = TEXT("Male");
}

