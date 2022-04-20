#include "FightingCharacter.h"
#include "Net/UnrealNetwork.h"

class UCameraComponentThird;
class AActor;
class AInteractiveMovable;
class UOrderComponent;
class UPrimitiveComponent;
class UEffectData;
class UASMComponent;
class UCharacterHealthComponent;
class UPlayerFightingComponent;
class UDefenseComponent;
class UPhysicalAnimationComponent;
class UAttackComponent;
class UAIFightingComponent;
class UMaterialInterface;
class UAvailabilityLayerData;
class UDeathDB;
class USkeletalMeshComponent;
class UPlayerAnim;
class ABaseWeapon;
class UStatsComponent;
class UHitComponent;
class UActorComponent;
class USCAbilitySystemComponent;

void AFightingCharacter::SetTarget(AActor* _target) {
}

void AFightingCharacter::ServerUpdateMovementAnimation_Implementation() {
}
bool AFightingCharacter::ServerUpdateMovementAnimation_Validate() {
    return true;
}

void AFightingCharacter::ServerSuicide_Implementation(bool _bForceUnrevivable) {
}
bool AFightingCharacter::ServerSuicide_Validate(bool _bForceUnrevivable) {
    return true;
}

void AFightingCharacter::ServerSetFlyMode_Implementation(bool _bFlyModeActivated) {
}
bool AFightingCharacter::ServerSetFlyMode_Validate(bool _bFlyModeActivated) {
    return true;
}

void AFightingCharacter::ServerSetFaction_Implementation(uint8 _uiFaction) {
}
bool AFightingCharacter::ServerSetFaction_Validate(uint8 _uiFaction) {
    return true;
}

void AFightingCharacter::ServerPullOutWeapon_Implementation(const FHandledWeaponInfo& HandledWeaponInfo) {
}
bool AFightingCharacter::ServerPullOutWeapon_Validate(const FHandledWeaponInfo& HandledWeaponInfo) {
    return true;
}

void AFightingCharacter::RemoveGameplayTag(const FString& _tag) {
}

void AFightingCharacter::PushCamera(const FString& _inCameraName) {
}

void AFightingCharacter::PopCamera() {
}

void AFightingCharacter::OnTakingOutWeaponOrderEnded(uint8 _uiOrderId, UOrderComponent* _orderComp) {
}

void AFightingCharacter::OnRep_TransitionZoneId() {
}

void AFightingCharacter::OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFightingCharacter::OnEffectAddedOrRemovedInternalCallback(bool _bAdded, UEffectData* _effectDataAsset) {
}

void AFightingCharacter::MulticastSetFaction_Implementation(uint8 _uiFaction) {
}

void AFightingCharacter::MulticastRemoveEffect_Implementation(UEffectData* _effectData, int64 _iRemovalTimeTick) {
}

void AFightingCharacter::MulticastLoadWeaponMesh_Implementation(const FHandledWeaponInfo& HandledWeaponInfo) {
}

void AFightingCharacter::MulticastAddEffect_Implementation(UEffectData* _effectData, int64 _iStartTimeTick) {
}

void AFightingCharacter::MulticastActivateRagdoll_Implementation(bool _bActivate, float _fBlendWeight) {
}

void AFightingCharacter::MulticastActivateCollision_Implementation(const FString& _contextString, bool _bActivate, bool _bLetStaticMeshOn, bool _bBlockTargettedAttacks) {
}

void AFightingCharacter::Hitted_Implementation(const FHitDescription& _hit) {
}

void AFightingCharacter::HandleSwapHand(EOrderType _ePreviousOrderType) {
}

void AFightingCharacter::HandleEndComboForWeapon() {
}

AActor* AFightingCharacter::GetTarget() const {
    return NULL;
}

UPlayerFightingComponent* AFightingCharacter::GetPlayerComponent() const {
    return NULL;
}

UPhysicalAnimationComponent* AFightingCharacter::GetPhysicalAnimationComponent() {
    return NULL;
}

UDefenseComponent* AFightingCharacter::GetDefenseComponent() const {
    return NULL;
}

UAttackComponent* AFightingCharacter::GetAttackComponent() const {
    return NULL;
}

UAIFightingComponent* AFightingCharacter::GetAiComponent() const {
    return NULL;
}


void AFightingCharacter::ClearCameras() {
}

void AFightingCharacter::BPF_TeleportForce(const FVector& _destLocation, const FRotator& _destRotation, bool bForce, bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior) {
}

void AFightingCharacter::BPF_TakeOutWeapon() {
}

void AFightingCharacter::BPF_SwapWeaponHandWithAnim(AActor* _actorToPickup, uint8 _uiPreviousOrderID) {
}

void AFightingCharacter::BPF_SpawnFootStepDecal_Implementation(UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation) {
}

void AFightingCharacter::BPF_SetIsValidTarget(bool _bIsValidTarget) {
}

void AFightingCharacter::BPF_SetInvincibility(bool _bIsInvincible) {
}

void AFightingCharacter::BPF_SetGuardGaugeInfinite(bool _bIsInfinite, bool _bRestoreGauge) {
}

void AFightingCharacter::BPF_SetFaction(EFactionsEnums _eFaction) {
}

void AFightingCharacter::BPF_SaveAnimInstanceReference() {
}

void AFightingCharacter::BPF_RestoreSavedAnimInstance() {
}

void AFightingCharacter::BPF_ResetInputStack(const FString& _context) {
}

int32 AFightingCharacter::BPF_PushAvailabilityLayerContext(InputContext _eInputContext, EALPriority _eALPriority) {
    return 0;
}

int32 AFightingCharacter::BPF_PushAvailabilityLayer(const UAvailabilityLayerData* _layer, EALBinaryOperation _eBinaryOperation, InputContext _eContext, EPredictionBehavior _ePredictionBehavior, int32 _iLinkedLayerId, int32 _iPriority, int32 _iALContext) {
    return 0;
}

void AFightingCharacter::BPF_PopAvailabilityLayerContext(InputContext _eInputContext, int32 _iContextID) {
}

uint8 AFightingCharacter::BPF_PlayGestureOnCharacter(const FSCGestureContainer& _gestureContainer, bool _bLoop) {
    return 0;
}

uint8 AFightingCharacter::BPF_PlayGesture(FSCGestureAndBlendProfile _gesture, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bLoop, EFidgetMirroringTypes _eMirrorHandling) {
    return 0;
}

void AFightingCharacter::BPF_PickUpObject(AInteractiveMovable* _object, bool _bMirrorPickup) {
}

void AFightingCharacter::BPF_NotifyTeleport(bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior) {
}

void AFightingCharacter::BPF_MulticastRemoveEffect(UEffectData* _effectData, float _fPredictionTime) {
}

void AFightingCharacter::BPF_MulticastAddEffect(UEffectData* _effectData, float _fPredictionTime) {
}

void AFightingCharacter::BPF_LaunchImpact(float _fDamage, bool _bLethal, float _fStunTime) {
}

bool AFightingCharacter::BPF_IsGuardGaugeInfinite() {
    return false;
}

bool AFightingCharacter::BPF_IsGetUpDone() {
    return false;
}

bool AFightingCharacter::BPF_IsDown() const {
    return false;
}

bool AFightingCharacter::BPF_IsBestActionAvailable(InputAction _eAction) const {
    return false;
}

bool AFightingCharacter::BPF_IsActorInAttackRange(const AActor* _actor) const {
    return false;
}

bool AFightingCharacter::BPF_HasWeaponEquipped(ABaseWeapon*& _outWeaponEquipped, bool _bIgnoreUnusableWeapon) const {
    return false;
}

bool AFightingCharacter::BPF_HasValidTarget() {
    return false;
}

UStatsComponent* AFightingCharacter::BPF_GetStatsComponent() const {
    return NULL;
}

USkeletalMeshComponent* AFightingCharacter::BPF_GetSkeletalMeshEquipment(EEquipmentSlot _eEquipmentSlot) {
    return NULL;
}

ABaseWeapon* AFightingCharacter::BPF_GetPickedUpWeapon() const {
    return NULL;
}

AInteractiveMovable* AFightingCharacter::BPF_GetPickedUpObject() const {
    return NULL;
}

FVector AFightingCharacter::BPF_GetLeftStickDirection(bool _bFallbackToCameraDir) const {
    return FVector{};
}

UHitComponent* AFightingCharacter::BPF_GetHitComponent() const {
    return NULL;
}

float AFightingCharacter::BPF_GetHeightFromFeet(const FVector& _vLocToCheck) const {
    return 0.0f;
}

UCharacterHealthComponent* AFightingCharacter::BPF_GetHealthComponent() const {
    return NULL;
}

FVector AFightingCharacter::BPF_GetDirToTarget(bool _bCanUseCamera, const AActor* _specifiedTarget, bool _bFallbackToDefaultTarget) const {
    return FVector{};
}

UDeathDB* AFightingCharacter::BPF_GetDeathDB() const {
    return NULL;
}

EDangerStates AFightingCharacter::BPF_GetDangerState() const {
    return EDangerStates::Safe;
}

int32 AFightingCharacter::BPF_GetCurrentTotalResilience() const {
    return 0;
}

UCameraComponentThird* AFightingCharacter::BPF_GetCameraThird() const {
    return NULL;
}

UActorComponent* AFightingCharacter::BPF_GetBPComponent(EFightingCharacterBPComponents _eComponent) {
    return NULL;
}

UASMComponent* AFightingCharacter::BPF_GetASMComponent() const {
    return NULL;
}

UPlayerAnim* AFightingCharacter::BPF_GetAnimGraph() const {
    return NULL;
}

TArray<UEffectData*> AFightingCharacter::BPF_GetAllActiveEffects() {
    return TArray<UEffectData*>();
}

USCAbilitySystemComponent* AFightingCharacter::BPF_GetAbilitySystemComponent() const {
    return NULL;
}

void AFightingCharacter::BPF_DrawDecalToRenderTarget_Implementation(UMaterialInterface* _decalMaterial, float _fSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation) {
}

EQuadrantTypes AFightingCharacter::BPF_ComputeQuadrant(AActor* _towardSpecificTarget) {
    return EQuadrantTypes::FrontLeft;
}

void AFightingCharacter::BPF_CharacterFullySpawned() {
}












































void AFightingCharacter::AddGameplayTag(const FString& _tag) {
}

void AFightingCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFightingCharacter, m_AbilityComponent);
    DOREPLIFETIME(AFightingCharacter, m_Camera);
    DOREPLIFETIME(AFightingCharacter, m_uiTransitionZoneId);
    DOREPLIFETIME(AFightingCharacter, m_bSpawnOccured);
    DOREPLIFETIME(AFightingCharacter, m_uiPawnCounter);
}

AFightingCharacter::AFightingCharacter() {
    this->m_availabilityLayerDB = NULL;
    this->m_AnimSyncBoneViewPoint = TEXT("head");
    this->m_bHasJustBeenHitted = false;
    this->m_bAllowAutonomousAnimPoseTick = false;
    this->m_AttackComponent = NULL;
    this->m_Camera = NULL;
    this->m_DefaultHandWeapons = NULL;
    this->m_DefaultLegWeapons = NULL;
    this->m_HitComponent = NULL;
    this->m_PlayerComponent = NULL;
    this->m_AIComponent = NULL;
    this->m_ASMComponent = NULL;
    this->m_DeathDB = NULL;
    this->m_uiTransitionZoneId = 255;
    this->m_fMinHeightForVisbilityTrace = 20.00f;
    this->m_fMaxHeightForVisbilityTrace = 160.00f;
    this->m_PickUpAngle = 30.00f;
    this->m_bSpawnOccured = false;
    this->m_bReceivedSaveFailedCompensation = false;
    this->m_bCheckInventoryBug1_25 = false;
    this->m_uiPawnCounter = 255;
    this->m_eFaction = EFactionsEnums::Faction1;
    this->m_bUpdateCollisionProfileOnBeginPlay = true;
    this->m_MaterialParameterCollectionGameplay = NULL;
    this->m_fCapsuleRadiusRatioForThrowableTargetLocation = 1.00f;
}

