#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NameHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class SCCORE_API UNameHandler : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    FString BPE_GetNameFromIndex(int32 _iIndex) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 BPE_GetIndexFromName(const FString& _inName) const;
    
    UNameHandler();
};

