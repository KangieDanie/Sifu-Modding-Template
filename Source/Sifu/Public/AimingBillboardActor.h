#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SCCore SCActor
#include "SCActor.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AimingBillboardActor.generated.h"

class AAimingBillboardActor;
class UBoxComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAimingBillboardActorOnSelectionChangedDyn, bool, _bSelected, AAimingBillboardActor*, aimingBillboard);

UCLASS()
class SIFU_API AAimingBillboardActor : public ASCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FAimingBillboardActorOnSelectionChangedDyn OnSelectionChangedDyn;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bDebug;
    
public:
    UFUNCTION(BlueprintPure)
    float BPF_GetScore() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector2D BPE_ComputeSize() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_ComputeScore(FVector _v3DPointToTest) const;
    
    AAimingBillboardActor();
};

