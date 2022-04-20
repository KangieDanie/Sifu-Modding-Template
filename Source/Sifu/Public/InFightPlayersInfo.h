#pragma once
#include "CoreMinimal.h"
#include "InFightPlayersInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FInFightPlayersInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> m_EnemyActor;
    
    FInFightPlayersInfo();
};

