#include "HitboxHelper.h"

class UHitBoxMetaData;

void UHitboxHelper::BPF_SetHitboxStructureDamage(const FHitBox& _hitbox, FHitBox& _outHitbox, float _fDamage) {
}

void UHitboxHelper::BPF_SetHitboxRow(FHitBox& _outHitbox, const FHitboxDataRow& _dataRow) {
}

void UHitboxHelper::BPF_SetHitboxDamageOnRef(FHitBox& _hitbox, float _fDamage) {
}

void UHitboxHelper::BPF_SetHitboxDamage(const FHitBox& _hitbox, FHitBox& _outHitbox, float _fDamage) {
}

void UHitboxHelper::BPF_MirrorAvoidDefenseMatrix(int32 _iDefenseMatrix, int32& _iOutResult, bool _bMirror) {
}

UHitBoxMetaData* UHitboxHelper::BPF_GetHitboxMetaDataInstance(const FHitBoxMetaDataClassInstance& _instance) {
    return NULL;
}

FHitboxDataRow UHitboxHelper::BPF_GetHitboxDataRow(const FHitBox& _hitbox) {
    return FHitboxDataRow{};
}

UHitboxHelper::UHitboxHelper() {
}

