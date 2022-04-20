#include "BaseWeapon.h"
#include "Templates/SubclassOf.h"

class UWeaponGameplayData;
class UBaseWeaponData;
class USkeletalMeshComponent;

void ABaseWeapon::BPF_ResetWeaponGameplayData() {
}

void ABaseWeapon::BPF_ResetWeaponData() {
}

void ABaseWeapon::BPF_OverrideWeaponGameplayData(TSubclassOf<UWeaponGameplayData> _newWeaponGameplayData) {
}

void ABaseWeapon::BPF_OverrideWeaponData(TSubclassOf<UBaseWeaponData> _newWeaponData) {
}

UWeaponGameplayData* ABaseWeapon::BPF_GetWeaponGameplayData() const {
    return NULL;
}

UBaseWeaponData* ABaseWeapon::BPF_GetWeaponData() const {
    return NULL;
}

void ABaseWeapon::BPF_DropWeapon(EDropReason _eDropReason) {
}

void ABaseWeapon::BPF_AttachWeapon(USkeletalMeshComponent* _charMesh, FName _socketName, bool _bEquipOnOppositeHand, bool _bChangeFakie) {
}

void ABaseWeapon::BPF_ApplyDamage(EOnDestructibleDamageType _eDamageType, const FVector& _vImpactLocation, float _fCustomDamage, bool _bPlayDropOrderOnDestroy) {
}


ABaseWeapon::ABaseWeapon() {
    this->m_throwFromPickUpTargetSettingsDB = NULL;
    this->m_weaponData = NULL;
    this->m_weaponGameplayData = NULL;
    this->m_ThrowingFromPickupAvaibilityLayer = NULL;
    this->m_bAttachedFakie = false;
    this->m_fWeaponTicketMaxDistance = 500.00f;
    this->m_bAvailableForIA = true;
}

