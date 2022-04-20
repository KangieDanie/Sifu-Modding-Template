#include "InteractiveObject.h"

class APlayerController;
class UInteractionObjectComponent;

void AInteractiveObject::UseInteractiveObjectFailed(APlayerController* _controller, FText _reason) {
}

void AInteractiveObject::UseInteractiveObject(APlayerController* _controller) {
}

UInteractionObjectComponent* AInteractiveObject::BPF_GetInteractionObjectComponent() {
    return NULL;
}

void AInteractiveObject::BPF_Deactivate() {
}



AInteractiveObject::AInteractiveObject() {
}

