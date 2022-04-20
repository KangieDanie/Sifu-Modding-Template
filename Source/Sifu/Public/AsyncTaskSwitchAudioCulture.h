#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskSwitchAudioCulture.generated.h"

class UAsyncTaskSwitchAudioCulture;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskSwitchAudioCultureCultureSwitched);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskSwitchAudioCultureCultureSwitchFailed);

UCLASS()
class SIFU_API UAsyncTaskSwitchAudioCulture : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskSwitchAudioCultureCultureSwitched CultureSwitched;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskSwitchAudioCultureCultureSwitchFailed CultureSwitchFailed;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskSwitchAudioCulture* BPF_SwitchAudioCulture(UObject* _context, const FString& _cultureName);
    
    UAsyncTaskSwitchAudioCulture();
};

