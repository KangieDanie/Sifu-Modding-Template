#pragma once
#include "CoreMinimal.h"
#include "EFightingState.h"
#include "AIBTTaskNode.h"
#include "AIFightingStateBTTask.generated.h"

UCLASS()
class SIFU_API UAIFightingStateBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EFightingState m_eFightingState;
    
public:
    UAIFightingStateBTTask();
};

