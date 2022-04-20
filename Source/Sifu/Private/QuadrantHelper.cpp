#include "QuadrantHelper.h"

EQuadrantTypes UQuadrantHelper::BPF_Mirror(EQuadrantTypes _eQuadrant, bool _bMirror) {
    return EQuadrantTypes::FrontLeft;
}

EQuadrantTypes UQuadrantHelper::BPF_MakeQuadrant(bool _bIsFront, bool _bIsLeft) {
    return EQuadrantTypes::FrontLeft;
}

bool UQuadrantHelper::BPF_IsLeft(EQuadrantTypes _eQuadrant) {
    return false;
}

bool UQuadrantHelper::BPF_IsFront(EQuadrantTypes _eQuadrant) {
    return false;
}

UQuadrantHelper::UQuadrantHelper() {
}

