#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAnimInstance
#include "SCAnimInstance.h"
#include "PropertyFloorBoneRepartition.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "IKPropertyEvaluation.h"
#include "IKSubAnimInstance.generated.h"

UCLASS(NonTransient)
class SIFU_API UIKSubAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_SlopeCurveName;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FRotator m_FloorAngleToTarget;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_BindRepartitionProperty(UPARAM(Ref) FPropertyFloorBoneRepartition& _property);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindProperty(UPARAM(Ref) FIKPropertyEvaluation& _fProperty, uint8 _uiEnum);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UIKSubAnimInstance();
};

