#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FCgSdkLedId.h"
#include "CgSDKBlueprint.generated.h"

UCLASS(BlueprintType)
class CGSDK_API UCgSDKBlueprint : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool ShowProgressBar(const FString& progressBarName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetStateWithKey(const FString& StateName, TEnumAsByte<FCgSdkLedId> Key);
    
    UFUNCTION(BlueprintCallable)
    static bool SetState(const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetProgressBarValue(const FString& progressBarName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGame(const FString& gameName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetEventWithKey(const FString& EventName, TEnumAsByte<FCgSdkLedId> Key);
    
    UFUNCTION(BlueprintCallable)
    static bool SetEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestControl();
    
    UFUNCTION(BlueprintCallable)
    static bool ReleaseControl();
    
    UFUNCTION(BlueprintCallable)
    static void PerformProtocolHandshake();
    
    UFUNCTION(BlueprintCallable)
    static bool HideProgressBar(const FString& progressBarName);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearStateWithKey(const FString& StateName, TEnumAsByte<FCgSdkLedId> Key);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearState(const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearAllStates();
    
    UFUNCTION(BlueprintCallable)
    static bool ClearAllEvents();
    
    UCgSDKBlueprint();
};

