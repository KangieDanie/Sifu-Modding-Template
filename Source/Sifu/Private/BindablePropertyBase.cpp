#include "BindablePropertyBase.h"

class UObject;

void UBindablePropertyBase::BPF_SetOwner(UObject* _owner) {
}

bool UBindablePropertyBase::BPF_IsValid() const {
    return false;
}

UBindablePropertyBase::UBindablePropertyBase() {
}

