#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "SoundGroundAnimNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(CollapseCategories)
class SIFU_API USoundGroundAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_NotifyGround(USkeletalMeshComponent* _meshComp, uint8 _surface) const;
    
    USoundGroundAnimNotify();
};

