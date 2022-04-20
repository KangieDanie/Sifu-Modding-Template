#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SkillTreeNode.generated.h"

class USkillGameplayEffect;
class USkillsChilds;

USTRUCT(BlueprintType)
struct FSkillTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_Socket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USkillGameplayEffect> m_Skill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkillsChilds* m_Childs;
    
    SIFU_API FSkillTreeNode();
};

