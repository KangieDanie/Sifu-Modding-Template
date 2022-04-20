#pragma once
#include "CoreMinimal.h"
#include "HittedAnimContainer.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HitAnimsPerDataTableContainer.h"
#include "ImpactResult.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "HitAnimRequest.generated.h"

class UAnimSequence;
class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UHitAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    bool BPF_FindCustomHitAnimation(const FHitAnimsPerDataTableContainer& _data, const FHitRequest& _request, const FImpactResult& _Impact, FHittedAnimContainer& _result) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UAnimSequence*> BPE_GetHitDeathAnimations() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetHitAnimation(const FHitRequest& _request, const FImpactResult& _Impact, AFightingCharacter* _defender, FHittedAnimContainer& _result, FAnimContainer& _weaponResult) const;
    
public:
    UHitAnimRequest();
};

