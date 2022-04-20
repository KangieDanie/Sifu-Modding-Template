#include "ConfrontationDialogAction.h"

TArray<FName> UConfrontationDialogAction::GetActorOptions() const {
    return TArray<FName>();
}

UConfrontationDialogAction::UConfrontationDialogAction() {
    this->m_iCircleIndex = -1;
    this->m_bPlayPrefightAnimations = false;
}

