#include "InteractiveMenu.h"

class AFightingPlayerController;
class ASCPlayerController;

void AInteractiveMenu::BPF_OpenMenu(AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility) {
}

FVector2D AInteractiveMenu::BPF_GetLeftStickValue(ASCPlayerController* _controller) const {
    return FVector2D{};
}

void AInteractiveMenu::BPF_CloseMenu(AFightingPlayerController* _controller, float _fBlendTime) {
}

AInteractiveMenu::AInteractiveMenu() {
    this->m_eMenu = EMenuEnum::None;
    this->m_InteractiveComp = NULL;
    this->m_ActorToBlendTo = NULL;
    this->m_MenuToShow = NULL;
}

