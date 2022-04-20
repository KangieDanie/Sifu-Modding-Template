#include "AnimStructTraversal.h"

FAnimStructTraversal::FAnimStructTraversal() {
    this->m_bTraversalInProgress = false;
    this->m_eTraversalPhase = ETraversalPhase::Entry;
}

