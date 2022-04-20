#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "BlendProfileBySpeedStateStruct.h"
#include "ESpeedState.h"
#include "BlendProfileHelper.generated.h"

class UBlendProfile;

UCLASS(BlueprintType)
class SIFU_API UBlendProfileHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UBlendProfile* BPF_GetBlendProfile(const FBlendProfileBySpeedStateStruct& _blendProfileBySpeedStateStruct, ESpeedState _eSpeedState);
    
    UBlendProfileHelper();
};

