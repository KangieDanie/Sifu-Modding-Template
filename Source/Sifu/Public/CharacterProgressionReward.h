#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardConditions.h"
#include "CharacterProgressionReward.generated.h"

class UCharacterProgressionUnlockDB;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECharacterProgressionRewardConditions m_eUnlockCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iUnlockParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCharacterProgressionUnlockDB*> m_Unlocks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAddToNewRewards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_NotificationText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_NotificationIcon;
    
    SIFU_API FCharacterProgressionReward();
};

