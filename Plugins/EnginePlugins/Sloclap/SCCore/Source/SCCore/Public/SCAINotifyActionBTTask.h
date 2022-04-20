#pragma once
#include "CoreMinimal.h"
#include "SCBTTaskNode.h"
#include "SCAINotifyActionBTTask.generated.h"

UCLASS()
class SCCORE_API USCAINotifyActionBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
public:
    USCAINotifyActionBTTask();
};

