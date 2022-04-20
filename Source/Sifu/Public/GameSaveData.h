#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE: SCCore ECharacterGender
#include "ECharacterGender.h"
#include "DuplicatedSaveData.h"
#include "ECharacterStat.h"
#include "CheckPointStruct.h"
#include "GameSaveData.generated.h"

class UGameplayEffect;
class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> m_ShrineEffects;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<TSubclassOf<USkillGameplayEffect>> m_UnlockedSkills;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<ECharacterStat, float> m_DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FCheckPointStruct> m_CheckPointPerLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCDominationGauge;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 m_iLastManGauge;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FName m_CurrentMapTagName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCHealth;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCFocusGauge;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_CurrentMapOptions;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<int32, FDuplicatedSaveData> m_duplicatedSaveData;
    
    SIFU_API FGameSaveData();
};

