#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SCAnimInstanceBase.generated.h"

UCLASS(NonTransient)
class SCCORE_API USCAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsReplayScrubSnapshotCompatible;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AnimInstanceUpdateEnable)
    bool m_bAnimInstanceUpdateEnabled;
    
    UFUNCTION()
    void OnRep_AnimInstanceUpdateEnable();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USCAnimInstanceBase();
};

