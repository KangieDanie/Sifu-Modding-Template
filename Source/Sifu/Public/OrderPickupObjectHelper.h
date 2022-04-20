#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "OrderPickupObjectHelper.generated.h"

class AActor;
class AFightingCharacter;
class UAnimSequence;

UCLASS(BlueprintType)
class SIFU_API UOrderPickupObjectHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool BPF_SetupPickupOrderParamsAndPlay(AFightingCharacter* _fightingChar, AActor* _actorToPickup, UAnimSequence* _animSequence, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bPushPopActionState, bool _bMirror);
    
    UOrderPickupObjectHelper();
};

