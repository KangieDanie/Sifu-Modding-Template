#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESCMessageLogSeverity.h"
#include "SCErrorHelpers.generated.h"

UCLASS(BlueprintType)
class SCCORE_API USCErrorHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_ShowMessageLog(ESCMessageLogSeverity _eSeverity, const FString& _textContent, FName _categoryName, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Ensure(bool _bValue, const FString& _message);
    
    USCErrorHelpers();
};

