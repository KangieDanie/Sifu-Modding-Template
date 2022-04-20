#pragma once
#include "CoreMinimal.h"
#include "PlayOrderTask.h"
#include "PlayOrderRagingBullTask.generated.h"

class URagingBullDB;

UCLASS()
class SIFU_API UPlayOrderRagingBullTask : public UPlayOrderTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URagingBullDB* m_ragingBullDB;
    
public:
    UPlayOrderRagingBullTask();
};

