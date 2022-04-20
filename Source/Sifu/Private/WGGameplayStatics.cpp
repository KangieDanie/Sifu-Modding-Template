#include "WGGameplayStatics.h"

class ACharacter;

bool UWGGameplayStatics::BPF_TakeVisualLoggerSnapshot(const FString& _fileName, FText& _outError) {
    return false;
}

FName UWGGameplayStatics::BPF_StartConversation(ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled, bool _bIgnoreCharacterCanSpeak) {
    return NAME_None;
}

void UWGGameplayStatics::BPF_SetVisualLoggerPaused(bool _bPaused) {
}

void UWGGameplayStatics::BPF_CutDialog() {
}

bool UWGGameplayStatics::BPF_CorsairSetState(const FString& _event) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairSetGame(const FString& _gameName) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairSetEvent(const FString& _event) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairRequestControl() {
    return false;
}

void UWGGameplayStatics::BPF_CorsairPerformProtocolHandshake() {
}

bool UWGGameplayStatics::BPF_CorsairClearState(const FString& _event) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairClearAllStates() {
    return false;
}

UWGGameplayStatics::UWGGameplayStatics() {
}

