#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NetOrderStructDodge.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore ESCCardinalPoints
#include "ESCCardinalPoints.h"
#include "EQuadrantTypes.h"
#include "HitBox.h"
#include "DodgeAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UDodgeAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetDodgeAnimations(TArray<FAnimContainer>& _outAnimContainer, TArray<FAnimContainer>& _outWeaponAnimContainer, bool& _bMirror, ESCCardinalPoints& _eOutCardinalPoint, AFightingCharacter* _owner, EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, const AFightingCharacter* _attacker, const FHitBox& _nextHit, bool _bAttackMirror, float _fHitDelay, const FNetOrderStructDodge& _dodgeStruct) const;
    
    UDodgeAnimRequest();
};

