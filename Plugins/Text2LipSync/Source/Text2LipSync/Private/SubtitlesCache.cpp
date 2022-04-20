#include "SubtitlesCache.h"

class USoundBase;

int32 USubtitlesCache::SaveToDisk(const FString& Filename) const {
    return 0;
}

int32 USubtitlesCache::SaveToBinaryFile(const FString& FullFileName) const {
    return 0;
}

bool USubtitlesCache::RenameAsset(const FString& CurrentName, const FString& NewName) {
    return false;
}

bool USubtitlesCache::RemoveAsset(const USoundBase* SoundAsset) {
    return false;
}

int32 USubtitlesCache::LoadFromDisk(const FString& Filename) {
    return 0;
}

int32 USubtitlesCache::LoadFromBinaryFile(const FString& FullFileName) {
    return 0;
}

bool USubtitlesCache::GetPausesForVoiceAsset(const USoundBase* SoundAsset, TArray<FLipSync_Interval>& Pauses) const {
    return false;
}

void USubtitlesCache::GetCachedKeys(TArray<FString>& CachedKeys) const {
}

bool USubtitlesCache::AddAsset(const USoundBase* SoundAsset, const TArray<FLipSync_TimedPhrase>& PhraseData, const TArray<int32> PauseIndexes, const float PhraseDuration) {
    return false;
}

USubtitlesCache::USubtitlesCache() {
}

