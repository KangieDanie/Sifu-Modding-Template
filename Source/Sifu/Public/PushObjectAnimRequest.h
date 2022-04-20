#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PushObjectAnimRequest.generated.h"

class UAnimSequence;
class AActor;
class APushableActor;

UCLASS(Blueprintable)
class SIFU_API UPushObjectAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    UAnimSequence* BPE_GetPushAnimation(const AActor* _Instigator, const FVector& _vTargetDir, const APushableActor* _pushable, bool& _bOutMirror) const;
    
    UPushObjectAnimRequest();
};

