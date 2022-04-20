#include "JoinDialogAction.h"

TArray<FName> UJoinDialogAction::GetActorOptions() const {
    return TArray<FName>();
}

UJoinDialogAction::UJoinDialogAction() {
    this->m_bPlayPrefightAnimations = false;
}

