#pragma once
#include "CoreMinimal.h"
#include "EFightingState.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "EarlyBlendOutNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UEarlyBlendOutNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EFightingState> m_FightingStateActiveConditions;
    
    UEarlyBlendOutNotify();
};

