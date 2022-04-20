#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "SkillButtonHelper.generated.h"

class USkillsDB;
class USkillButton;

UCLASS(BlueprintType)
class USkillButtonHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_RebuildDBFromButtons(USkillsDB* _db, USkillButton* _root);
    
    USkillButtonHelper();
};

