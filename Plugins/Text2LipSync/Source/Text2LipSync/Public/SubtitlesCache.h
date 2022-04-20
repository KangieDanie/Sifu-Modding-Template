#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LipSync_Interval.h"
#include "LipSync_Pause.h"
#include "LipSync_TimedPhrase.h"
#include "SubtitlesCache.generated.h"

class USoundBase;

UCLASS()
class TEXT2LIPSYNC_API USubtitlesCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, FLipSync_Pause> Data;
    
public:
    UFUNCTION()
    int32 SaveToDisk(const FString& Filename) const;
    
    UFUNCTION()
    int32 SaveToBinaryFile(const FString& FullFileName) const;
    
    UFUNCTION()
    bool RenameAsset(const FString& CurrentName, const FString& NewName);
    
    UFUNCTION()
    bool RemoveAsset(const USoundBase* SoundAsset);
    
    UFUNCTION()
    int32 LoadFromDisk(const FString& Filename);
    
    UFUNCTION()
    int32 LoadFromBinaryFile(const FString& FullFileName);
    
    UFUNCTION()
    bool GetPausesForVoiceAsset(const USoundBase* SoundAsset, TArray<FLipSync_Interval>& Pauses) const;
    
    UFUNCTION()
    void GetCachedKeys(TArray<FString>& CachedKeys) const;
    
    UFUNCTION()
    bool AddAsset(const USoundBase* SoundAsset, const TArray<FLipSync_TimedPhrase>& PhraseData, const TArray<int32> PauseIndexes, const float PhraseDuration);
    
    USubtitlesCache();
};

