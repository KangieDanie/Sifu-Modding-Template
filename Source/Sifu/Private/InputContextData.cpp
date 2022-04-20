#include "InputContextData.h"

void UInputContextData::CreateOwners() {
}

void UInputContextData::ClearUnUsedInputs() {
}

void UInputContextData::Clear() {
}

void UInputContextData::Build() {
}

UInputContextData::UInputContextData() {
    this->m_contextType = InputContext::Invalid;
    this->m_disableOther = false;
    this->m_bPauseOther = false;
}

