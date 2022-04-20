#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCUserDefinedEnumHandlerHelper.generated.h"

class UEnum;

UCLASS(BlueprintType)
class SCCORE_API USCUserDefinedEnumHandlerHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetEnumValue(UPARAM(Ref) FSCUserDefinedEnumHandler& _enum, uint8 _uiEnumValue);
    
    UFUNCTION(BlueprintPure)
    static uint8 BPF_GetEnumValue(const FSCUserDefinedEnumHandler& _enum, const UEnum* _enumObject);
    
    UFUNCTION(BlueprintPure)
    static FName BPF_GetEnumNameValue(const FSCUserDefinedEnumHandler& _enum);
    
    UFUNCTION(BlueprintPure)
    static FText BPF_GetEnumDisplayName(const FSCUserDefinedEnumHandler& _enum);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_Equal(const FSCUserDefinedEnumHandler& _enum1, const FSCUserDefinedEnumHandler& _enum2);
    
    UFUNCTION(BlueprintPure)
    static FSCUserDefinedEnumHandler BPF_ConvertEnumToSCUserEnum(UEnum* _enum, uint8 _value);
    
    USCUserDefinedEnumHandlerHelper();
};

