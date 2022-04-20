#include "TextLipSync.h"

bool UTextLipSync::StopSpeaking(bool bStopPlayingSound) {
    return false;
}

bool UTextLipSync::Speak(const FLipsyncData& _lipsyncData, float _fDuration, bool _bUseImprovedTextToPhoneme) {
    return false;
}

void UTextLipSync::SetSingleAnimationValue(const FName& _targetName, float _fValue) {
}

bool UTextLipSync::IsSpeaking() const {
    return false;
}

bool UTextLipSync::IsInitialized() const {
    return false;
}

void UTextLipSync::InitializePhonemesArray() {
}

float UTextLipSync::GetSpeakingTime() const {
    return 0.0f;
}

float UTextLipSync::GetLastPhraseDuration() const {
    return 0.0f;
}

float UTextLipSync::GetCurveValue(const FName& CurveName) const {
    return 0.0f;
}

void UTextLipSync::GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue) const {
}

FString UTextLipSync::GetCurrentPhonemesLine() const {
    return TEXT("");
}

FString UTextLipSync::GetActiveMorphTargets() const {
    return TEXT("");
}

void UTextLipSync::BuildPhraseData(const FLipsyncData& _lipsyncData) {
}

UTextLipSync::UTextLipSync() {
    this->m_LipSyncDB = NULL;
    this->ControlledMesh = NULL;
    this->bIsInitialized = false;
    this->bIsSpeaking = false;
    this->bIsSpeakingPhonemeInAudio = false;
    this->bSubtitleWasChanged = false;
    this->PauseTime = 0.00f;
    this->CurrentTime = 0.00f;
    this->EnvelopeVolumeMultiplier = 0.00f;
    this->PhraseDuration = 0.00f;
    this->PreviousPhonemeIndex = 0;
    this->CurrentPhonemeIndex = 0;
    this->NextNotifyIndex = 0;
    this->CurrentIntervalDuration = 0.10f;
}

