#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "FocusPointCondition.generated.h"

UCLASS()
class SIFU_API UFocusPointCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iValue;
    
    UFocusPointCondition();
};

