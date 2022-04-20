#include "SaveSettings.h"
#include "SCSaveObjectGameData.h"
#include "SCSaveObjectPlayerProfile.h"

USaveSettings::USaveSettings() {
    this->m_bEnabled = true;
    this->m_DefaultSaveName = TEXT("DefaultSave");
    this->m_DefaultProfileName = TEXT("ProfileSaveList");
    this->m_DefaultAudioCulture = TEXT("English(US)");
    this->m_DefaultTextCulture = TEXT("en");
    this->m_SaveGameObjectType = USCSaveObjectGameData::StaticClass();
    this->m_SaveProfileObjectType = USCSaveObjectPlayerProfile::StaticClass();
    this->m_fMaxBlockingSaveDuration = 4.00f;
}

