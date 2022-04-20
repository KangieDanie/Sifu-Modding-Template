#pragma once
#include "CoreMinimal.h"
#include "PendingAttackXP.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EPendingttackXPType.h"
#include "FOpponentAttackXPHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFOpponentAttackXPHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetXPValueByType(const FPendingAttackXP& _XP, EPendingttackXPType _eType);
    
    UFOpponentAttackXPHelper();
};

