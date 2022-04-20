#include "HitDefenseResultHelpers.h"

class UAvoidPropertyDB;

EAvoidType UHitDefenseResultHelpers::BPF_GetAvoidType(const FHitDefenseResult& _defenseResult) {
    return EAvoidType::Duck;
}

UAvoidPropertyDB* UHitDefenseResultHelpers::BPF_GetAvoidDB(const FHitDefenseResult& _defenseResult) {
    return NULL;
}

UHitDefenseResultHelpers::UHitDefenseResultHelpers() {
}

