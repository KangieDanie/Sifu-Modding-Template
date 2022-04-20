#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SkillTree.generated.h"

class USkillsDB;
class USkillGameplayEffect;
class UCurveFloat;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FSkillTreeOnFinished);

UCLASS()
class SIFU_API ASkillTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkillsDB* m_SkillsDB;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateTreeOverTime(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevUnlockedSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newUnlockedSkills, float _fDuration, UCurveFloat* _floatCurve, FSkillTreeOnFinished _onFinished);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _unlockedSkills);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BlendTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newSkills, float _fAlpha);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetNodeState(FName _boneName, float _fState, float _fAge);
    
    ASkillTree();
};

