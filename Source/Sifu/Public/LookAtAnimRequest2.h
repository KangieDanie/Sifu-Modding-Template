#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AimOffsetStruct.h"
#include "LookAtAnimRequest2.generated.h"

class UPlayerAnim;

UCLASS(Abstract, Blueprintable)
class SIFU_API ULookAtAnimRequest2 : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    FAimOffsetStruct BPE_GetLookAtAimOffset(UPlayerAnim* _animInstance) const;
    
    ULookAtAnimRequest2();
};

