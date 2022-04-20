#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ProgressionRewardArray.generated.h"

USTRUCT(BlueprintType)
struct FProgressionRewardArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ECharacterProgressionRewardTypes> m_WeaponRewards;
    
    SIFU_API FProgressionRewardArray();
};

