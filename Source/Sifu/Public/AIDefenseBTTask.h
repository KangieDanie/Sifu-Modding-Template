#pragma once
#include "CoreMinimal.h"
#include "AIBTTaskNode.h"
#include "AIDefenseBTTask.generated.h"

UCLASS()
class SIFU_API UAIDefenseBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bFinishWhenIsNotStun;
    
public:
    UAIDefenseBTTask();
};

