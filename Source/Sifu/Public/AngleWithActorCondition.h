#pragma once
#include "CoreMinimal.h"
#include "EAngleComputeMethod.h"
#include "BaseActorTargetCondition.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "AngleWithActorCondition.generated.h"

UCLASS()
class SIFU_API UAngleWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAngleComputeMethod m_eMethod;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_AngleRange;
    
    UAngleWithActorCondition();
};

