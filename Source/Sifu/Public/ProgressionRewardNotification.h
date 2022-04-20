#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "ECharacterProgressionRewardTypes.h"
#include "CharacterProgressionReward.h"
#include "ProgressionRewardNotification.generated.h"

class UCharacterProgressionUnlockDB;
class UProgressionRewardNotification;

UCLASS()
class UProgressionRewardNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ECharacterProgressionRewardTypes m_eRewardType;
    
    UPROPERTY(BlueprintReadOnly)
    FCharacterProgressionReward m_Reward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCharacterProgressionUnlockDB* m_Unlock;
    
    UFUNCTION(BlueprintCallable)
    UProgressionRewardNotification* BPF_Init(ECharacterProgressionRewardTypes _eRewardType, FCharacterProgressionReward _reward, UCharacterProgressionUnlockDB* _unlock);
    
    UProgressionRewardNotification();
};

