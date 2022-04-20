#pragma once
#include "CoreMinimal.h"
#include "ESCSignificanceBuckets.h"
//CROSS-MODULE INCLUDE: SCCore SCFootIkAnimInstance
#include "SCFootIkAnimInstance.h"
#include "EFightingActionState.h"
#include "FootIkAnimInstance.generated.h"

UCLASS(NonTransient)
class SIFU_API UFootIkAnimInstance : public USCFootIkAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<EFightingActionState> m_eHandledActionStates;
    
    UPROPERTY(EditAnywhere)
    bool m_bExcludeActionStates;
    
    UPROPERTY(EditAnywhere)
    TArray<EFightingActionState> m_eHipsHandledActionStates;
    
    UPROPERTY(EditAnywhere)
    bool m_bExcludeHipsActionStates;
    
    UPROPERTY(EditAnywhere)
    ESCSignificanceBuckets m_eMinSignificanceRequired;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<ESCSignificanceBuckets> m_ePerServiceMinSignificanceRequired;
    
public:
    UFootIkAnimInstance();
};

