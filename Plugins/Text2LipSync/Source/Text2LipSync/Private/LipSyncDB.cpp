#include "LipSyncDB.h"

ULipSyncDB::ULipSyncDB() {
    this->MorphLowerLimit = 0.00f;
    this->MorphUpperLimit = 1.00f;
    this->MinimumPhonemesInterval = 0.00f;
    this->PauseFadeInTime = 0.10f;
    this->PauseFadeOutTime = 0.10f;
    this->PhonemeFadeInTime = 0.20f;
    this->PhonemeFadeOutTime = 0.20f;
    this->m_fPlayOffset = 0.10f;
    this->EmotionBlendTime = 0.10f;
    this->ShortEmotionHalfDuration = 0.10f;
    this->AnimationType = ELipSyncAnimType::T_PoseAsset;
    this->m_PoseAsset = NULL;
    this->m_fLipSyncCurveChannelBlendDuration = 0.10f;
    this->m_PhonemeBlendInCurve = NULL;
    this->m_PhonemeBlendOutCurve = NULL;
    this->PauseMultiplier = 2.00f;
    this->EnvelopeMultiplier = 20.00f;
    this->EnvelopeVolumeMultiplier = 1.00f;
    this->AudioMinTreshold = 0.02f;
}

