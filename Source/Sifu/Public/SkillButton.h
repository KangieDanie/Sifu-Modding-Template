#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ButtonUserWidget.h"
#include "SkillTreeNode.h"
#include "SkillButton.generated.h"

class USkillsDB;
class USkillButton;
class USkillGameplayEffect;
class ASkillTree;

UCLASS(EditInlineNew)
class USkillButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool m_bUdateParallax;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    TArray<USkillButton*> m_ChildButtons;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSubclassOf<USkillGameplayEffect> m_GameplayEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkillsDB* m_DB;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateButtonLocation(ASkillTree* SkillTree);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSkillTreeNode(const FSkillTreeNode& _node);
    
    UFUNCTION(BlueprintPure)
    void BPF_GetSkillTreeNode(FSkillTreeNode& _node);
    
    USkillButton();
};

