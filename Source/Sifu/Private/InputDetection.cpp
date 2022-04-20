#include "InputDetection.h"

FInputDetection::FInputDetection() {
    this->m_eInput = InputAction::AttackLight;
    this->m_bValidateOnEnterStack = false;
    this->m_iEnterStackValidation = 0;
    this->m_bValidateOnExitStack = false;
    this->m_TargetActionTypeRequest = NULL;
    this->m_eTarget = EActionType::LockMove;
    this->m_bIgnoreTargetOnPriorityResolution = false;
    this->m_iNoTargetPriority = 0;
    this->m_bRequiresTarget = false;
    this->m_bRequiresTargetOnStack = false;
    this->m_bUpdateTargetOnExitStack = false;
    this->m_eUpdateTargetOnExitStackCondition = EUpdateTargetCondition::Alway;
    this->m_bResetInputOnDismiss = false;
    this->m_bResetInputOnActivation = false;
    this->m_bResetHoldToggleInputOnAbilityEnd = false;
}

