#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ReplayGameplayCameraRecordEvent.h"
#include "ReplayGameplayCameraRecordEventProxy.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FReplayGameplayCameraRecordEventProxyCallBack, const FReplayGameplayCameraRecordEvent&, _serializedEvent);

UCLASS(BlueprintType)
class UReplayGameplayCameraRecordEventProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintCallable)
    static void BPF_DeserializeGameplayCameraEvent(const UObject* _worldContextObject, FReplayGameplayCameraRecordEventProxyCallBack _callBack);
    
public:
    UReplayGameplayCameraRecordEventProxy();
};

