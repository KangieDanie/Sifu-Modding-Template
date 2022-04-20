#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "ParryRequestInfos.h"
#include "ParryAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UParryAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetPickupOnParryAnim(const FHitRequest& _request, AFightingCharacter* _character, FAnimContainer& _outAnim) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetParryAnimWeapon(const FParryRequestInfos& _infos, FAnimContainer& _outAnim) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetParryAnim(const FParryRequestInfos& _infos, FAnimContainer& _outAnim) const;
    
    UParryAnimRequest();
};

