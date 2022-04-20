#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "EMoveTransitionType.h"
#include "AnimStructMoveTransition.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructMoveTransition : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMoveTransitionType m_eTransitionType1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMoveTransitionType m_eTransitionType2;
    
    FAnimStructMoveTransition();
};

