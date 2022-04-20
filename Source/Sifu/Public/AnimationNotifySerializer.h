#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//#include "SCAnimNotifyExtraInfo.h"
#include "AnimationNotifySerializer.generated.h"

UCLASS(BlueprintType)
class UAnimationNotifySerializer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
   /* UFUNCTION(BlueprintCallable)
    static FSCAnimNotifyExtraInfo BPF_ReadNotifyExtraInfoFromBufferArray(const TArray<uint8>& _extraInfoBufferArray);*/
    
    UAnimationNotifySerializer();
};

