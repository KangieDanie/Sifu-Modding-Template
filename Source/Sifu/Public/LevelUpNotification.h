#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "LevelUpNotification.generated.h"

class ULevelUpNotification;

UCLASS()
class ULevelUpNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iLevel;
    
    UFUNCTION(BlueprintCallable)
    ULevelUpNotification* BPF_Init(int32 _iLevel);
    
    ULevelUpNotification();
};

