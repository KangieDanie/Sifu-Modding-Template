#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HitActionLauncher.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UHitActionLauncher : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_hitActionCondition;
    
    UHitActionLauncher();
};

