#include "SCDialogSettings.h"

USCDialogSettings::USCDialogSettings() {
    this->m_DialogLineStartAkEvent = TEXT("Mute_Ono");
    this->m_DialogLineStopAkEvent = TEXT("Unmute_Ono");
    this->m_fDefaultTimeBetweenLines = 0.15f;
}

