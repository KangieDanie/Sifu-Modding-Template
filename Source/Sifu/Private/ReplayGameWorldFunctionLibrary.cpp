#include "ReplayGameWorldFunctionLibrary.h"

class UObject;
class AFightingCharacter;
class AActor;
class ASCCharacterImpostor;
class ASCPlayerController;
class UExponentialHeightFogComponent;

bool UReplayGameWorldFunctionLibrary::BPF_IsPhotomodeActivated(const UObject* _worldContextObject) {
    return false;
}

FString UReplayGameWorldFunctionLibrary::BPF_GetReplayActorUniqueID(const AActor* _actor) {
    return TEXT("");
}

AFightingCharacter* UReplayGameWorldFunctionLibrary::BPF_GetMainCharacter(const UObject* _worldContextObject) {
    return NULL;
}

bool UReplayGameWorldFunctionLibrary::BPF_GetFinalLevelPostProcessSettings(ASCPlayerController* _playerController, FPostProcessSettings& outPostProcessSettings) {
    return false;
}

UExponentialHeightFogComponent* UReplayGameWorldFunctionLibrary::BPF_GetExponentialHeightFog(const UObject* _worldContextObject) {
    return NULL;
}

float UReplayGameWorldFunctionLibrary::BPF_GetApplicationDeltaTime() {
    return 0.0f;
}

TArray<ASCCharacterImpostor*> UReplayGameWorldFunctionLibrary::BPF_GetActiveImpostors(const UObject* _worldContextObject) {
    return TArray<ASCCharacterImpostor*>();
}

TArray<AFightingCharacter*> UReplayGameWorldFunctionLibrary::BPF_GetActiveAIs(const UObject* _worldContextObject) {
    return TArray<AFightingCharacter*>();
}

TArray<AActor*> UReplayGameWorldFunctionLibrary::BPF_GetActiveAIAndImpostors(const UObject* _worldContextObject) {
    return TArray<AActor*>();
}

UReplayGameWorldFunctionLibrary::UReplayGameWorldFunctionLibrary() {
}

