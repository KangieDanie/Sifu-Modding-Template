#include "AIBTTaskNode.h"

UAIBTTaskNode::UAIBTTaskNode() {
    this->m_eCancelTaskOnAvailableInput = InputAction::None;
    this->m_bCancelWaitedOrdersOnFinish = true;
}

