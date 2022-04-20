#pragma once
#include "CoreMinimal.h"
#include "SpawnerGroupSoundData.generated.h"

class ASpawnerGroup;
class AAISituationActor;

USTRUCT(BlueprintType)
struct FSpawnerGroupSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_FightStateOffDelay;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> m_MeleeStateLvlSplits;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> m_MeleeDangerLvlSplits;
    
    UPROPERTY(EditAnywhere)
    float m_MeleeFightStateOffDelay;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMeleeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsThreatEnabled;
    
    UPROPERTY()
    TArray<ASpawnerGroup*> m_DependantGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<AAISituationActor*> m_DependantSituations;
    
    SIFU_API FSpawnerGroupSoundData();
};

