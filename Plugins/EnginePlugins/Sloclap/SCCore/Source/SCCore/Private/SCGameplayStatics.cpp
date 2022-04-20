#include "SCGameplayStatics.h"

class UObject;
class UParticleSystem;
class AActor;
class USceneComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class APlayerController;
class APlayerCameraManager;
class APawn;

void USCGameplayStatics::BPF_UnloadLevels(const UObject* _context, const TArray<FName>& _levels, bool _bSynchronous) {
}

UParticleSystemComponent* USCGameplayStatics::BPF_SpawnEmitterAttachedFromPool(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName PoolType, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

UParticleSystemComponent* USCGameplayStatics::BPF_SpawnEmitterAtLocationFromPool(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FName PoolType, FVector Location, FRotator Rotation, FVector Scale) {
    return NULL;
}

void USCGameplayStatics::BPF_SetLevelsForcedDesiredState(const UObject* _context, const TArray<FName>& _levels, ESCLevelStreamingState _eDesiredState) {
}

void USCGameplayStatics::BPF_SetGamePaused(const UObject* _worldContextObject, bool _bPaused) {
}

void USCGameplayStatics::BPF_SetCurrentPrimitiveDataAsDefault(UPrimitiveComponent* _primitiveComponent) {
}

bool USCGameplayStatics::BPF_ProjectWorldToScreenWithTransform(APlayerController* _player, const FVector& _vWorldPosition, FVector2D& _vOutScreenPosition, FTransform _cameraTransform, bool _bPlayerViewportRelative, EProjectionComputeBehavior _eComputeBehavior) {
    return false;
}

bool USCGameplayStatics::BPF_ProjectScreenToWorldWithTransform(APlayerController* _player, const FVector2D& _vInScreenPosition, FVector& _vOutWorldPosition, FVector& _vOutWorldDir, FTransform _cameraTransform) {
    return false;
}

void USCGameplayStatics::BPF_LoadLevels(const UObject* _context, const TArray<FName>& _levels, bool _bSynchronous, bool _bMakeVisibleAfterLoad) {
}

bool USCGameplayStatics::BPF_IsPlaySessionPaused() {
    return false;
}

bool USCGameplayStatics::BPF_IsGamePaused(const UObject* _worldContextObject) {
    return false;
}

bool USCGameplayStatics::BPF_IsBuildTest() {
    return false;
}

bool USCGameplayStatics::BPF_IsBuildShipping() {
    return false;
}

AActor* USCGameplayStatics::BPF_GetViewTarget(APlayerCameraManager* _cameraManager) {
    return NULL;
}

APawn* USCGameplayStatics::BPF_GetFirstLocalPlayerPawn(const UObject* _worldContextObject) {
    return NULL;
}

float USCGameplayStatics::BPF_GetBlendTimeToGo(APlayerCameraManager* _cameraManager) {
    return 0.0f;
}

void USCGameplayStatics::BPF_ForceRefresh(AActor* _actor) {
}

void USCGameplayStatics::BPF_DisplayErrorMessage(FName _title, const FString& _message) {
}

USCGameplayStatics::USCGameplayStatics() {
}

