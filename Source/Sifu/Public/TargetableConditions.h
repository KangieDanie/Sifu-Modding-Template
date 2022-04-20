#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "ETargetingPrio.h"
#include "TargetableConditions.generated.h"

class UEvaluateTargetCondition;

USTRUCT(BlueprintType)
struct SIFU_API FTargetableConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ETargetingPrio, FFloatRange> m_Ranges;
    
    /*UPROPERTY(EditAnywhere, Export)
    TArray<UEvaluateTargetCondition*> m_Conditions;*/
    
    /*UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UEvaluateTargetCondition>> m_ClassConditions;*/
    
    FTargetableConditions();
};

