#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EDodgeDirectionType.h"
#include "HitBox.h"
#include "DodgeTypeUseCaseMatrix.generated.h"

class UArchetypeAsset;

UCLASS(Blueprintable)
class SIFU_API UDodgeTypeUseCaseMatrix : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    EDodgeDirectionType BPE_GetDodgeToUseFromHitbox(const FHitBox& _hitbox, const UArchetypeAsset* _archetype) const;
    
    UDodgeTypeUseCaseMatrix();
};

