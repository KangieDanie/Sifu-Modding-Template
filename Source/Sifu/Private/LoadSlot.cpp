#include "LoadSlot.h"

class ULoadChoices;

uint8 ULoadSlot::BPF_GetSlotIndex() {
    return 0;
}

FString ULoadSlot::BPF_GetSaveName() const {
    return TEXT("");
}

FCharacterSaveDescription ULoadSlot::BPF_GetSaveDescription() {
    return FCharacterSaveDescription{};
}

ULoadChoices* ULoadSlot::BPF_GetLoadPanel() {
    return NULL;
}


ULoadSlot::ULoadSlot() {
}

