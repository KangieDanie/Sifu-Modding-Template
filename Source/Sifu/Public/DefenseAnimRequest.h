#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HitDescription.h"
#include "DefenderAnimInfos.h"
#include "DefenseAnimInfos.h"
#include "DefenseAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UDefenseAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetHitDefenseAnimation(const FHitDescription& _hitDescription, AFightingCharacter* _grabber, FDefenderAnimInfos& _outDefenderAnims, FDefenseAnimInfos& _outDefendeeAnims) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetDefaultThrowAnimation(FDefenseAnimInfos& _outGrabberAnims, FDefenseAnimInfos& _outGrabbedAnims) const;
    
    UDefenseAnimRequest();
};

