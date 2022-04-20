#include "SCDialogComponent.h"

class UBlackboardData;

bool USCDialogComponent::BPF_InitBlackBoardFromAsset(UBlackboardData* _data) {
    return false;
}

USCDialogComponent::USCDialogComponent() {
    this->m_ContextualDb = NULL;
}

