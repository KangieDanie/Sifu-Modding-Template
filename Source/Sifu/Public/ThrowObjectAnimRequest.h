#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ThrowObjectAnimRequest.generated.h"

class AActor;
class UAttackDB;
class AThrowableActor;

UCLASS(Blueprintable)
class SIFU_API UThrowObjectAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    UAttackDB* BPE_GetThrowComboAttack(const AActor* _Instigator, const FVector& _vTargetDir, const AThrowableActor* _throwable, const AActor* _target, bool& _bOutMirror) const;
    
    UThrowObjectAnimRequest();
};

