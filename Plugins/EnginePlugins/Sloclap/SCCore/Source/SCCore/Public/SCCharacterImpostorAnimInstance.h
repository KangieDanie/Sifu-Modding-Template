#pragma once
#include "CoreMinimal.h"
#include "SCAnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "SCCharacterImpostorAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class SCCORE_API USCCharacterImpostorAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    FPoseSnapshot m_PoseSnapshotToMimic;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bHasAnimation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bMirrorAnimation;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USCCharacterImpostorAnimInstance();
};

