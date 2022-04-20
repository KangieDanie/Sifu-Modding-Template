#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
#include "SkillsDB.generated.h"

class USkillsChilds;

UCLASS(BlueprintType)
class USkillsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkillsChilds* m_Root;
    
    USkillsDB();
    
    // Fix for true pure virtual functions not being implemented
};

