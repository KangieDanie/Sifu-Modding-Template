#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "OrderPlayAnimHelper.generated.h"

class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UOrderPlayAnimHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static void BPF_GetOrderAnimContainer(UOrderComponent* _OrderComponent, uint8 _uiID, FAnimContainer& _outAnimContainer);
    
    UOrderPlayAnimHelper();
};

