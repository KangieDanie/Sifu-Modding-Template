#include "SCDialogGameplayStatics.h"

class ACharacter;

void USCDialogGameplayStatics::BPF_PlayDialogLine(ACharacter* _character, FName _line, const bool _bGenericSubtitles) {
}

bool USCDialogGameplayStatics::BPF_IsPlayingDialogLine(ACharacter* _character) {
    return false;
}

bool USCDialogGameplayStatics::BPF_IsInvolvedInConversation(const ACharacter* _character) {
    return false;
}

USCDialogGameplayStatics::USCDialogGameplayStatics() {
}

