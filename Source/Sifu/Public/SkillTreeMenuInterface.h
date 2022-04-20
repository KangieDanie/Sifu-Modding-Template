#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "SkillTreeMenuInterface.generated.h"

UINTERFACE(Blueprintable)
class USkillTreeMenuInterface : public UInterface {
    GENERATED_BODY()
};

class ISkillTreeMenuInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_DebugSkillButtonUpdated();
    
};

