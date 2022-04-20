#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "DisplayLevel.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCBlueprintLog.generated.h"

class UObject;

UCLASS(BlueprintType)
class SCCORE_API USCBlueprintLog : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPFLogCategory(const FString& _text, FName _categoryName, DisplayLevel _eDisplayLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BPFLog(const UObject* _targetSelf, const FString& _log, DisplayLevel _eDisplayLevel, bool _bViewportDisplay, FLinearColor _viewportColor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_VisualLogWithSpecificOwner(UObject* _owner, const FString& _category, DisplayLevel _eVerbosity, const FString& _inString);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_VisualLogBox(UObject* _owner, const FString& _category, DisplayLevel _eVerbosity, const FVector& _position, float _size, const FColor& _color, const FString& _inString);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_VisualLog(UObject* _worldContextObject, const FString& _category, DisplayLevel _eVerbosity, const FString& _inString);
    
    USCBlueprintLog();
};

