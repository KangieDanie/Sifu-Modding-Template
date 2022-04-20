#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "TargetResult.h"
#include "ETS_NextHitExtraInfos.h"
#include "ETS_NextHitHelper.generated.h"

class AFightingCharacter;

UCLASS(BlueprintType)
class SIFU_API UETS_NextHitHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool BPF_GetNextHitTargetExtraInfos(AFightingCharacter* _character, const FTargetResult& _targetInfos, FETS_NextHitExtraInfos& _infos);
    
    UETS_NextHitHelper();
};

