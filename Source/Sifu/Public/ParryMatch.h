#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EParrySide.h"
#include "EAttackOrigin.h"
#include "EAttackTarget.h"
#include "EParryHeight.h"
#include "ParryMatch.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UParryMatch : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesParrySideMatch(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesParryHeightMatch(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
    UParryMatch();
};

