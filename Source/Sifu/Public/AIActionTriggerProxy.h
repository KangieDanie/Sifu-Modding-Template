#pragma once
#include "CoreMinimal.h"
#include "AIActionAttack.h"
#include "AIActionTriggerProxy.generated.h"

class AActor;

UCLASS()
class SIFU_API UAIActionTriggerProxy : public UAIActionAttack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bTriggerProxyDirectlyAtStart;
    
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerProxy();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetProxyActorToTrigger(AActor* _proxyActor);
    
    UAIActionTriggerProxy();
};

