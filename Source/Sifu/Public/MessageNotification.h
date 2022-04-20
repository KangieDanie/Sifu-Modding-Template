#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "MessageNotification.generated.h"

class UMessageNotification;

UCLASS()
class UMessageNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText m_Message;
    
    UFUNCTION(BlueprintCallable)
    UMessageNotification* BPF_Init(FText _message);
    
    UMessageNotification();
};

