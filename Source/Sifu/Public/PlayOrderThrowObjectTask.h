#pragma once
#include "CoreMinimal.h"
#include "PlayOrderTask.h"
#include "EThrowObjectActionType.h"
#include "PlayOrderThrowObjectTask.generated.h"

UCLASS()
class SIFU_API UPlayOrderThrowObjectTask : public UPlayOrderTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EThrowObjectActionType m_ThrowObjectActionType;
    
public:
    UPlayOrderThrowObjectTask();
};

