#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "OrderServiceFrameRangeRequest.generated.h"

class ABaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceFrameRangeRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    FFloatRange BPE_GetFrameRange(uint8 _uiOrderId, const ABaseCharacter* _owner) const;
    
    UOrderServiceFrameRangeRequest();
};

