#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "NetOrderStructHelper.generated.h"

class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UNetOrderStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool GetBaseNetOrderStruct(UOrderComponent* _OrderComponent, uint8 _uiOrderId, bool _bCheck, FNetOrderStruct& _outNetOrderStruct);
    
    UNetOrderStructHelper();
};

