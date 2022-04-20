#include "FidgetPlayerBTService.h"

UFidgetPlayerBTService::UFidgetPlayerBTService() {
    this->m_eFidgetType = EAIFidgetTypes::Idle;
    this->m_bRestoreTypeOnCeaseRelevant = false;
}

