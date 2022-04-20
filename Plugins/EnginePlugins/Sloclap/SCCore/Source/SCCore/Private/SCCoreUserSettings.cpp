#include "SCCoreUserSettings.h"

USCCoreUserSettings::USCCoreUserSettings() {
    this->m_bEnableGameFlowInPIE = false;
    this->m_bEnableSaveLevelInPIE = false;
    this->m_bAutoSkipCutscenes = false;
    this->m_bEnableVolumeSolidDraw = true;
    this->m_bPauseOnAiNextAction = false;
    this->m_bListPoolableActorsInOutliner = false;
    this->m_bAutoGenerateActorPools = true;
    this->m_bDebugDisplayAllPools = false;
    this->m_eDebugActorSelectionBoxType = ESCDebugActorBoxType::BottomSquare;
}

