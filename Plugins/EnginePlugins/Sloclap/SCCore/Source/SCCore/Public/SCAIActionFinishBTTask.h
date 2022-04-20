#pragma once
#include "CoreMinimal.h"
#include "SCBTTaskNode.h"
#include "SCAIActionFinishBTTask.generated.h"

UCLASS()
class SCCORE_API USCAIActionFinishBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bSucceeded;
    
    UPROPERTY(EditAnywhere)
    FString m_Message;
    
public:
    USCAIActionFinishBTTask();
};

