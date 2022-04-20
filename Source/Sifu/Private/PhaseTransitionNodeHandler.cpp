#include "PhaseTransitionNodeHandler.h"

FPhaseTransitionNodeHandler::FPhaseTransitionNodeHandler() {
    this->m_TransitionObject = NULL;
    this->m_bNeedsLastManGaugeFull = false;
    this->m_SyncHitActionLauncher = NULL;
    this->m_LevelSequence = NULL;
    this->m_LevelSequenceTransform = EAIPhaseLevelSequenceTransform::Target;
    this->m_iChildNodeIndex = 0;
    this->m_bResetHealth = false;
    this->m_bResetStructure = false;
    this->m_bResetSuperDizzy = false;
    this->m_bResetCurrentAIActions = false;
}

