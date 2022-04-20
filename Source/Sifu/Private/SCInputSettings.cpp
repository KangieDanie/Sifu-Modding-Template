#include "SCInputSettings.h"

USCInputSettings::USCInputSettings() {
    this->m_eInputAction = InputAction::MenuNavigation;
    this->m_eAltInputAction = InputAction::None;
    this->m_bVirtualCursorAcceleration = false;
    this->m_fVirtualCursorAcceleration = 300.00f;
    this->m_fVirtualCursorMaxSpeed = 700.00f;
    this->m_fVirtualCursorStickySlowdown = 0.70f;
    this->m_fVirtualCursorDeadZone = 0.20f;
    this->m_bSnapEnabled = false;
    this->m_fSnapSpeed = 0.50f;
    this->m_bActivateRemapping = true;
    this->m_InputPriority.AddDefaulted(19);
    this->m_AlwaysCollidingActions.AddDefaulted(3);
    this->m_ActionPriority.AddDefaulted(5);
    this->m_IncompatibilityGroups.AddDefaulted(4);
    this->m_ActionCompatibilityRules.AddDefaulted(4);
    this->m_CachedProfiles.AddDefaulted(2);
    this->m_CachedInputDatas.AddDefaulted(9);
}

