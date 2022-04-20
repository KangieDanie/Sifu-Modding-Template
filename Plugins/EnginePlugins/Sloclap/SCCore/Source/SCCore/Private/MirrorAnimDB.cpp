#include "MirrorAnimDB.h"

FName UMirrorAnimDB::BPF_GetTwinsBoneName(const FName& _boneName) {
    return NAME_None;
}

UMirrorAnimDB::UMirrorAnimDB() {
    this->m_UberSkeleton = NULL;
}

