#pragma once
#include "CoreMinimal.h"
#include "ProgressionRewardArray.h"
#include "ECharacterProgressionRewardTypes.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CharacterProgressionReward.h"
#include "ProgressionDoorStruct.h"
#include "RetrieveLostItemStruct.h"
#include "ECharacterProgressionRewardConditions.h"
#include "CharacterProgressionDB.generated.h"

class UProgressionDoorData;
class UQuestItemData;

UCLASS(BlueprintType)
class SIFU_API UCharacterProgressionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterProgressionReward m_Rewards[2];
    
    UPROPERTY(EditAnywhere)
    TArray<ECharacterProgressionRewardTypes> m_FightingStyleProgression;
    
    UPROPERTY(EditAnywhere)
    FProgressionRewardArray m_AttackSlotProgression[4];
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_SpecialAbilityXPOnSuccess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FProgressionDoorStruct> m_ProgressionDoors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnTargetted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnDodge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnParry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnAvoid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAttackXPOnAbsorb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiOffenseAttackXPOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiOffenseAttackXPOnGuarded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiOffenseAttackXPOnPerfectLink;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiOffenseAttackXPOnAbsorb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiOffenseAttackXPOnGuardBreak;
    
    UPROPERTY(EditAnywhere)
    int32 m_iCairnsToOpen;
    
    UPROPERTY(EditAnywhere)
    TArray<FRetrieveLostItemStruct> m_RetrieveLostItems;
    
    UFUNCTION(BlueprintPure)
    ECharacterProgressionRewardTypes BPF_GetProgressionRewardForSchoolLevel(int32 _iSchoolLevel);
    
    UFUNCTION(BlueprintPure)
    FCharacterProgressionReward BPF_GetProgressionReward(ECharacterProgressionRewardTypes _type);
    
    UFUNCTION(BlueprintCallable)
    FProgressionDoorStruct BPF_GetProgressionDoorStructByQuestItem(UQuestItemData* _questItemData);
    
    UFUNCTION(BlueprintCallable)
    FProgressionDoorStruct BPF_GetProgressionDoorStructByDoorData(UProgressionDoorData* _progressionDoorData);
    
    UFUNCTION(BlueprintPure)
    void BPF_GetNextProgressionRewards(ECharacterProgressionRewardConditions _condition, const int32& _iValue, TArray<FCharacterProgressionReward>& _result) const;
    
    UCharacterProgressionDB();
};

